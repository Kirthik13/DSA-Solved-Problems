#include<bits/stdc++.h>
using namespace std;
#define nx '\n'
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define foi(i) for(auto i=v.begin();i!=v.end();i++)
#define ll long long int
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);
vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();

    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {

        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;

        res.push_back (token);
    }


    res.push_back (s.substr (pos_start));
return res;
}

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];
set<string>st;
bool v_p(string s,int i,int j){
    string r=s.substr(i,j-i+1);
    if(r.front()=='0'){
        if(r.size()==1){
            return 1;
        }
        return 0;
    }
    int num=stoi(s.substr(i,j-i+1));
    if(num>=0 and num<=255){
        return 1;
    }
    return 0;
}
bool valid(string s,int i,int j,int k,int n){
    if(v_p(s,0,i) and v_p(s,i+1,j) and v_p(s,j+1,k) and v_p(s,k+1,n-1)){
        return 1;
    }
    return 0;
}
void add_str(string s,int i,int j,int k,int n){
    string tem;
  
    tem+=s.substr(0,i+1);
    tem.pb('.');
  
    tem+=s.substr(i+1,j-i);
    tem.pb('.');
  
    tem+=s.substr(j+1,k-j);
    tem.pb('.');
   
    tem+=s.substr(k+1,n-k-1);
    st.insert(tem);

}
void solve() {
  ll i, j, n, m;
  string s="1902426";
  for(int i=0;i<s.size()-3;i++){
      for(int j=i+1;j<s.size()-2;j++){
          for(int k=j+1;k<s.size()-1;k++){
              if(valid(s,i,j,k,s.size())){
                  add_str(s,i,j,k,s.size());
              }
          }
      }
  }
  for(auto i:st){
      cout<<i<<" ";
  }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    //int t = 1;
    //cin >> t;
    // while(t--) {
       solve();
    // }

    return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m){
    int i, u, v;
    while(m--){
        cin>>u>>v;
    u--, v--;
        g[u].pb(v);
        g[v].pb(u);
    }
}

void dfs(int u, int par){
    for(int v:g[u]){
        if (v == par) continue;
        dfs(v, u);
    }
}


