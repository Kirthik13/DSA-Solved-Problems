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
// int a[N];
vector<ll> add(vector<ll> v1, vector<ll> v2)
{
    reverse(all(v1));
    reverse(all(v2));
    ll len = min(v1.size(), v2.size());
    ll carry{};
    vector<ll> v;
    // deb(len);
    for (int i = 0; i < len; i++)
    {
        ll dig = (v1[i] + v2[i] + carry);
        v.emplace_back(dig % 10);
        // deb(dig);
        carry = dig / 10;
        // deb(carry);
    }
    if (v1.size() > len)
    {
        // deb(carry);
        for (int i = len; i < v1.size(); i++)
        {
            ll dig = (v1[i] + carry);
            v.emplace_back(dig % 10);
            carry = dig / 10;
        }
    }
    if (v2.size() > len)
    {
        for (int i = len; i < v2.size(); i++)
        {
            ll dig = (v2[i] + carry);
            v.emplace_back(dig % 10);
            carry = dig / 10;
        }
    }
    while (carry)
    {
        v.emplace_back(carry % 10);
        carry /= 10;
    }
    reverse(all(v));
    return v;
}
vl division(vl v1)
{
    ll rem{};
    vl v;
    for (int i = 0; i < v1.size(); i++)
    {
        if (rem)
        {
            rem = rem * 10 + v1[i]; 
            v.emplace_back(rem / 2);
            rem = rem % 2;
        }
        else
        {
            if (v1[i] <= 1)
            {
                v.emplace_back(0);
                rem += v1[i];
            }
            else
            {
                v.emplace_back(v1[i] / 2);
                rem = v1[i] % 2;
            }
        }
    }

    int i = 0;
    vl ans;
    while (v[i] == 0)
        i++;

    for (; i < v.size(); i++)
    {
        ans.pb(v[i]);
    }
    return ans;
}
vl sub(vl v1, vl v2)
{
    vl ans;
    reverse(all(v1));
    reverse(all(v2));

    ll len = v2.size();
    for (int i = 0; i < len; i++)
    {
        if (v1[i] < v2[i])
        {
            v1[i + 1]--;
            ans.pb(10 + v1[i] - v2[i]);
        }
        else
        {
            ans.pb(v1[i] - v2[i]);
        }
    }
    if (v1.size() > len)
    {
        for (int i = len; i < v1.size(); i++)
        {
            // cout<<"ad";
            if (v1[i] == -1)
            {
                v1[i + 1]--;
                // deb(v1[i+1]);
                ans.pb(10 + v1[i]);
            }
            else
            {
                ans.pb(v1[i]);
            }
        }
    }
    reverse(all(ans));

    int i = 0;
    vl res;
    while (ans[i] == 0)
        i++;

    for (; i < ans.size(); i++)
    {
        res.pb(ans[i]);
    }
    return res;
}
void solve()
{
    //   ll i, j, n, m;
    string a, b;
    cin >> a >> b;
    // deb2(a,b);
    vector<ll> v1;
    vector<ll> v2;

    for (int i = 0; i < a.size(); i++)
    {
        // cout<<"ASd";
        // ll n1=();
        // deb(n1);
        v1.pb(a[i] - '0');
    }
    for (int i = 0; i < b.size(); i++)
    {
        // ll n1=int(b[i]-'0');
        v2.pb(b[i] - '0');
    }

    // vl sum = add(v1, v2);
    // vl div = division(sum);

    // vl diff = sub(v1, div);

    // for (auto &i : div)
    // {
    //     cout << i;
    // }
    // cout << nx;
    // for (auto &i : diff)
    // {
    //     cout << i;
    // }
    // cout << nx;
    

}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    // int t = 10;
    // cin >> t;
    // while (t--)
    // {
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
