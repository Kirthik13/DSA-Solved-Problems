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
bool isvalid(string s,int k)
{
    map<int,int>m;
    for(int i=0;i<k;i++)
    {
        m[s[i]-'0']++;
    }
     if(m[1]>=1 and m[2]>=1 and m[3]>=1)
        {
            return 1;
        }
int n=s.size();
    for(int i=k;i<n;i++)
    {

        m[s[i]-'0']++;
        // deb(s[k+i-1]-'0');
        m[s[i-k]-'0']--;
        // deb2(m[1],m[2]);
        // deb(m[3]);
        if(m[1]>=1 and m[2]>=1 and m[3]>=1)
        {
            return 1;
        }


    }
    // for(auto i:m)

    // {
    //     cout<<i.first<<" "<<i.second<<" "<<k<<endl;
        
    // }
    return 0;

}
void solve() {
  ll i=0, j=0, n;
  string s;
  cin>>s;
    int l=3;
    int r=s.size();
    int ans=INT_MAX;
    while(l<=r)
    {
        int mid=(l+r)/2;
        // deb(mid);
        if(isvalid(s,mid))
        {
            ans=min(mid,ans);
            // deb(ans);
            r=mid-1;
            // cout<<mid<<endl;
        }
        else{
            l=mid+1;
        }
    }
    
    ans==INT_MAX?cout<<0<<nx:cout<<ans<<nx;

//     vector<int>v(3,-1);
//     int ans=INT_MAX;
//   for(int i=0;i<s.size();i++){
//       v[s[i]-'1']=i;
//       int k=*min_element(all(v));
//       if(k!=-1)
//       {
//           ans=min(ans,i-k+1);
//       }
//   }
    
    // for(auto i:s)
    // {
    //     if(v.empty() or v.back().first!=i)
    //     {
    //         v.push_back(make_pair(i,1));


    //     }
    //     else{
    //         v.back().second++;
    //     }
    // }
    // int ans=INT_MAX;
    // int m=v.size();
    // for(int i=1;i<m-1;i++)
    // {
    //     if(v[i-1].first!=v[i+1].first)
    //     {
    //         ans=min(v[i].second+2,ans);
    //     }
    // }


}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
       solve();
    }

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


