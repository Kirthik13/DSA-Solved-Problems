#include <bits/stdc++.h>
using namespace std;
#define nx '\n'
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define foi(i) for (auto i = v.begin(); i != v.end(); i++)
#define ll long long int
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim)
{
    uniform_int_distribution<int> uid(0, lim - 1);
    return uid(rang);
}
int mpow(int base, int exp);
void ipgraph(int n, int m);
void dfs(int u, int par);
vector<string> split(string s, string delimiter)
{
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();

    string token;
    vector<string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos)
    {

        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;

        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];
int fn(int &idx, int &n, vector<int> &v, unordered_map<int, vector<int>> &m)
{
    int bf = INT_MAX, af = INT_MAX;
    // deb(idx);
    
    // for (int i = 0; i < m[1].size(); i++)
    // {
    //     if (m[1][i] > idx)
    //     {
    //         af = i;
    //         break;
    //     }
    //     bf = i;
    //     // cout<<m[1][i]<<endl;
    // }
    for(auto i:m[1])
    {
        if(i>idx)
        {
            af=i;
            break;
        }
        bf=i;
    }
    // deb2(bf, af);
    if(bf==INT_MAX )
    {
        return af-idx;
    }
    else if(af==INT_MAX)
    {
        return idx-bf;

    }
    return min(af-idx, idx-bf);
    // return 0;
}
// int fn(int &idx,int &n,vector<int>&v)
// {
//     int c1=1,c2=1;
//     int i=idx-1;
//     int j=idx+1;
//     // deb(idx);
//     // while(i>=0)
//     // {
//     //     if(v[i]==1)
//     //     {
//     //         break;
//     //     }
//     //     c1++;
//     //     i--;

//     // }
//     while(i>=0 or j<n)
//     {
//         if(j<n)
//         {
//             if(v[j]==1)
//             {
//                 break;
//             }
//         }
//         if(i>=0)
//         {
//             if(v[i]==1)
//             {
//                 break;
//             }
//         }

//         // if(v[j<n?j]==1 or v[i]==1)
//         // {
//         //     break;
//         // }
//         c1++;

//         i>=0?--i:i;
//         j<n?++j:j;

//     }
//     // if(max(c1,c2)==3)
//     // {
//     //     deb(idx);
//     // }
//     return c1;
// }
void solve()
{
    //   ll i, j, n, m;
    vector<int> v = { 1,0,1,0,0,1};
    int n = v.size(), ans = INT_MIN;
    unordered_map<int, vector<int>> m;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            m[v[i]].push_back(i);
        }
    }
    // for(auto i:m[1])
    // {
    //     cout<<i<<" ";
         
    // }
    // cout<<endl;
    int i = 0;
    while (i < n)
    {
        if (v[i] == 0)
        {
            // continue;
            ans = max(ans, fn(i, n, v, m));
        }
        i++;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    // int t = 1;
    // cin >> t;
    //  while(t--) {
    solve();
    // }

    return 0;
}

int mpow(int base, int exp)
{
    base %= mod;
    int result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}

void ipgraph(int n, int m)
{
    int i, u, v;
    while (m--)
    {
        cin >> u >> v;
        u--, v--;
        g[u].pb(v);
        g[v].pb(u);
    }
}

void dfs(int u, int par)
{
    for (int v : g[u])
    {
        if (v == par)
            continue;
        dfs(v, u);
    }
}
