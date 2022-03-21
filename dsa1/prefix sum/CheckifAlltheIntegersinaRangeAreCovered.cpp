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
//   ll;
//   cout<<"Asd";
vector<vector<int>>v={{1,2},{3,4},{5,6}};
// unordered_map<int,int>m;
//  int l= 21;
//  int r=21;
//  for(int i=l;i<=r;i++)
//  {
//      m[i]++;
//  }

// int num=l;
//  for(auto &i:v)
//  {
//    int l1=i[0];
//    int r1=i[1];

//    for(int j=l1;j<=r1;j++)
//    {
//        if(m.find(j)!=m.end())
//        {
//            m[j]++;
//        }
//    }
//  }

//  for(int i=l;i<=r;i++)
//  {
//      if(m[i]==1)
//      {
//  cout<<"fasle";
//         //  return 0;
//          break;
//      }
//  }
//  cout<<"true";
//  return true;


    // int pre[52]={0};

    // for(auto &i:v)
    // {
    //     ++pre[i[0]];
    //     --pre[i[1]+1];
    // }

    // for(int i=1;i<52;i++)
    // {
    //     v[i]+=v[i-1];
    // }
    // for(int i=l;i<=r;i++)
    // {
    //     if(!pre[i])
    //     {
    //         return 0;
    //     }
    // }   
    // return 1;


     int pre[52]={0};
        int l=2,r=5;
        for(auto &i:v)
        {
            // if(l>i[1] or r<i[0] )
            // {
            //     continue;
            // }
            ++pre[max(i[0],l)];
            // ++pre[i[0]];
            --pre[min(i[1]+1,r+1)];
            // --pre[i[1]+1];
        
        for(int i=l;i<=r;i++)
        {
            cout<<pre[i]<<" ";
        }
        cout<<nx;
        }
        int overlap{};
        for(int i=1;i<=r;i++)
        {
            overlap+=pre[i];
            
            if(i>=l and overlap==0)
            {
                break;
                // return 0;
            }
        }
        // return 1;

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


