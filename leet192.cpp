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
 int totans=0;   
void SieveOfEratosthenes(int n,vector<bool>&prime)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    // memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    // for (int i = 2; i <n; i ++)
    // {
    //     if(prime[i])
    //     {
    //         cout<<i<<" ";
    //     }
    // }
    
}
 
void cc(vector<int>&v,int i,vector<int>&res,vector<bool>&prime)
{
    if(i==v.size())
    {
        int pro=1;
        int ft=0;
        
        for(auto i:res)
        {
            pro*=i;
            cout<<i<<" ";
            // cout<<nx;
        //     ++totans;
            // ft++;
        }
        deb(pro);
       
        // if(pro==30)
        // {
        //     for(auto i:res)
        //     {
        //         cout<<i<<" ";
        //     }
        //     cout<<nx;
        // }
        for(int i=2;i<prime.size();i++)
        {
            int p=1;
            if(prime[i])
            {
                if(i==pro)
                {
                    // deb(pro);
                    totans++;
                    // for(auto i:res)
                    // {
                    //     cout<<i<<" ";
                    // }
                    // cout<<nx;
                    // deb(pro);
                    break;
                }
                p*=i;
                if(i>pro)
                {
                    break;
                }
                for(int j=i+1;j<prime.size();j++)
                {
                    // if(prime[j])
                    // {
                        p*=j;
                        if(p>pro)
                        {
                            break;
                        }
                        if(p==pro)
                        {
                            // deb(pro);
                            totans++;
                    //         for(auto i:res)
                    // {
                    //     cout<<i<<" ";
                    // }
                    // cout<<nx;
                    // deb(pro);
                            break;
                        }
                        // if(p>pro)
                        // {
                        //     break;
                        // }
// 
                    // }
                }
            }
        }
        
        // cout<<nx;
        // deb(pro);
        
        return;
    }   
    cc(v,i+1,res,prime);
    res.push_back(v[i]);
    cc(v,i+1,res,prime);
    res.pop_back();
    
}
void solve() {
//   ll i, j, n, m;
int n;
cin>>n;
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    
    vector<bool>prime(100001,true);
    SieveOfEratosthenes(100001,prime);
    vector<int>res;
    cc(v,0,res,prime);
    deb(totans);
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


