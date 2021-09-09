// #include<bits/stdc++.h>
// using namespace std;
// #define nx '\n'
// #define gc getchar_unlocked
// #define fo(i,n) for(i=0;i<n;i++)
// #define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
// #define foi(i) for(auto i=v.begin();i!=v.end();i++)
// #define ll long long int
// #define si(x)	scanf("%d",&x)
// #define sl(x)	scanf("%lld",&x)
// #define ss(s)	scanf("%s",s)
// #define pi(x)	printf("%d\n",x)
// #define pl(x)	printf("%lld\n",x)
// #define ps(s)	printf("%s\n",s)
// #define deb(x) cout << #x << "=" << x << endl
// #define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
// #define pb push_back
// #define mp make_pair
// #define F first
// #define S second
// #define all(x) x.begin(), x.end()
// #define clr(x) memset(x, 0, sizeof(x))
// #define sortall(x) sort(all(x))
// #define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
// #define PI 3.1415926535897932384626
// typedef pair<int, int>	pii;
// typedef pair<ll, ll>	pl;
// typedef vector<int>		vi;
// typedef vector<ll>		vl;
// typedef vector<pii>		vpii;
// typedef vector<pl>		vpl;
// typedef vector<vi>		vvi;
// typedef vector<vl>		vvl;
// mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
// int rng(int lim) {
//     uniform_int_distribution<int> uid(0,lim-1);
//     return uid(rang);
// }
// int mpow(int base, int exp); 
// void ipgraph(int n, int m);
// void dfs(int u, int par);
// vector<string> split (string s, string delimiter) {
//     size_t pos_start = 0, pos_end, delim_len = delimiter.length();

//     string token;
//     vector<string> res;

//     while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {

//         token = s.substr (pos_start, pos_end - pos_start);
//         pos_start = pos_end + delim_len;

//         res.push_back (token);
//     }


//     res.push_back (s.substr (pos_start));
// return res;
// }

// const int mod = 1'000'000'007;
// const int N = 3e5, M = N;
// //=======================

// vi g[N];
// int a[N];

// void solve() {
//   ll  n, m;
//   string s1,t;
//   cin>>s1>>t;
  

//   int i=1;
//   string s=t+'$'+s1;
//   vector<int>z(s.size(),0);
//   n=s.size();
//   while(i<n)
//   {
//       int i1=i;
//       int j=0;
//     if(s[i]==s[j]){
//         // z[i]++;
//       while(j<i1 and i<n)
//       {
//           if(s[i]==s[j])
//           {
//               z[i1]++;
//           }
//           else{
//               break;
//           }
//           i++;
//           j++;
//       }
//     }   
   
//         i=i1+1;
//   }
// //   for(auto i:z)
// //   {
// //       cout<<i<<" ";
// //   }
// int ans{};
//   int n2=t.size();
//     for(int i=0;i<n;i++)
//     {
//         if(z[i]==t.size())
//         {
//             ans++;
//             // cout<<i-n2-1<<endl;
//         }
//     }
//     cout<<ans;
// }

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//     //int t = 1;
//     //cin >> t;
//     // while(t--) {
//        solve();
//     // }

//     return 0;
// }

// int mpow(int base, int exp) {
//   base %= mod;
//   int result = 1;
//   while (exp > 0) {
//     if (exp & 1) result = ((ll)result * base) % mod;
//     base = ((ll)base * base) % mod;
//     exp >>= 1;
//   }
//   return result;
// }

// void ipgraph(int n, int m){
//     int i, u, v;
//     while(m--){
//         cin>>u>>v;
//     u--, v--;
//         g[u].pb(v);
//         g[v].pb(u);
//     }
// }

// void dfs(int u, int par){
//     for(int v:g[u]){
//         if (v == par) continue;
//         dfs(v, u);
//     }
// }



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
auto z_algo(string s)
{
    int n=s.size();
    vector<int>z(n,0);
    int i=1;
  int l=0;
  int r=0;
  while(i<n)
  { 
      if(i>r)
      {
          l=r=i;
          while(r<n and s[r]==s[r-l])
          {
              r++;
          }
          z[i]=r-l;
          r--;  
      }
      else{
          int idx=i-l;
          if(i+z[idx]<=r)
          {
              z[i]=z[idx];
          }
          else{
           l=i;
          while(r<n and s[r]==s[r-l])
          {
              r++;
          }
          z[i]=r-l;
          r--; 
          }
      }
      i++;
  }
    return z;
}

void solve() {

  string s1,t;
  cin>>s1>>t;
//   cin>>s1;
//   string s=s1;
  string s=s1+'$'+t;
int res{};

    int n=s.size();
    // int i=0;

      
auto ans=z_algo(s);
// for(auto i:ans)
// {
//     cout<<i<<" ";
// }
for(int i=s1.size()+1;i<n;i++)
{
    res+=ans[i];
}

cout<<res<<nx;
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







// // A C++ program that implements Z algorithm for pattern searching
// #include<iostream>
// using namespace std;
 
// void getZarr(string str, int Z[]);
 
// // prints all occurrences of pattern in text using Z algo
// void search(string text, string pattern)
// {
//     // Create concatenated string "P$T"
//     string concat = pattern + "$" + text;
//     int l = concat.length();
 
//     // Construct Z array
//     int Z[l];
//     getZarr(concat, Z);
 
//     // now looping through Z array for matching condition
//     for (int i = 0; i < l; ++i)
//     {
//         // if Z[i] (matched region) is equal to pattern
//         // length we got the pattern
//         // if (Z[i] == pattern.length())
//         //     cout << "Pattern found at index "
//         //         << i - pattern.length() -1 << endl;
//         cout<<Z[i]<<" ";
//     }
//     cout<<endl;
// }
 
// // Fills Z array for given string str[]
// void getZarr(string str, int Z[])
// {
//     int n = str.length();
//     int L, R, k;
 
//     // [L,R] make a window which matches with prefix of s
//     L = R = 0;
//     for (int i = 1; i < n; ++i)
//     {
//         // if i>R nothing matches so we will calculate.
//         // Z[i] using naive way.
//         if (i > R)
//         {
//             L = R = i;
 
//             // R-L = 0 in starting, so it will start
//             // checking from 0'th index. For example,
//             // for "ababab" and i = 1, the value of R
//             // remains 0 and Z[i] becomes 0. For string
//             // "aaaaaa" and i = 1, Z[i] and R become 5
//             while (R<n && str[R-L] == str[R])
//                 R++;
//             Z[i] = R-L;
//             R--;
//         }
//         else
//         {
//             // k = i-L so k corresponds to number which
//             // matches in [L,R] interval.
//             k = i-L;
 
//             // if Z[k] is less than remaining interval
//             // then Z[i] will be equal to Z[k].
//             // For example, str = "ababab", i = 3, R = 5
//             // and L = 2
//             if (Z[k] < R-i+1)
//                 Z[i] = Z[k];
 
//             // For example str = "aaaaaa" and i = 2, R is 5,
//             // L is 0
//             else
//             {
//                 // else start from R and check manually
//                 L = i;
//                 while (R<n && str[R-L] == str[R])
//                     R++;
//                 Z[i] = R-L;
//                 R--;
//             }
//         }
//     }
// }
 
// // Driver program
// int main()
// {
//     string text = "ababaa";
//     string pattern = "aba";
//     search(text, pattern);
//     return 0;
// }