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

const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];

void solve() {
//   ll i, j, n, m;
    int n;
    cin>>n;

    vector<int>v={1};
    // for(auto &i:v)
    // {
    //     cin>>i;
    // }

    for(int i=0;i<v.size();i++)
    {
        // deb2(v[i],v[i-1]);
        // deb(v[i+1]);
        if(i==0)
        {
            if(v.size()>1){
            if(v[i]==0 and v[i+1]==0)
            {
                v[i]=1;
                n--;
                ++i;
            }
            }
            else{
                if(v[i]==0)
                {
                    v[i]=1;
                    n--;
                ++i;
                }
            }
        }
        else if(i==v.size()-1)
        {
             if(v.size()>1){
            if(v[i]==0 and v[i-1]==0)
            {
                v[i]=1;
                n--;
                ++i;
            }
            }
           
        }
        else if(v[i-1]==0 and v[i]==0 and v[i+1]==0)
        {
            // cout<<"Asd";
            v[i]=1;
            n--;
                ++i;
        }
        if(n==0)
        {
            break;
        }
    }
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<(n==0)?"true":"false";

}
                // ++i;

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


