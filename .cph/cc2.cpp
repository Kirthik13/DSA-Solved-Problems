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
// string bigy(string number,int divisor){

//  string ans;
 
//     // Find prefix of number that is larger
//     // than divisor.
//     int idx = 0;
//     int temp = number[idx] - '0';
//     while (temp < divisor)
//         temp = temp * 10 + (number[++idx] - '0');
 
//     // Repeatedly divide divisor with temp. After
//     // every division, update temp to include one
//     // more digit.
//     while (number.size() > idx) {
//         // Store result in answer i.e. temp / divisor
//         ans += (temp / divisor) + '0';
 
//         // Take next digit of number
//         temp = (temp % divisor) * 10 + number[++idx] - '0';
//     }
 
//     // If divisor is greater than number
//     if (ans.length() == 0)
//         return "0";
 
//     // else return ans
    
//     return ans;
// }
// void solve() {
//   ll  n, m;
// cin>>n>>m;
// string s=to_string((pow(m,2)));
// s=bigy(s,n*2);
// int idx=s.size()-1;
// while(!isdigit(s[idx--])){
//     s.pop_back();
// }
//     s.pop_back();

// cout<<s<<"\n";
// }

// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//     int t = 1;
//     cin >> t;
//     while(t--) {
//        solve();
//     }

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
#include <bits/stdc++.h>
using namespace std;
 
// A function to perform division of large numbers
string longDivision(string number, int divisor)
{
    // As result can be very large store it in string
    string ans;
 
    // Find prefix of number that is larger
    // than divisor.
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');
 
    // Repeatedly divide divisor with temp. After
    // every division, update temp to include one
    // more digit.
    while (number.size() > idx) {
        // Store result in answer i.e. temp / divisor
        ans += (temp / divisor) + '0';
 
        // Take next digit of number
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }
 
    // If divisor is greater than number
    if (ans.length() == 0)
        return "0";
 
    // else return ans
    return ans;
}
 
// Driver program to test longDivison()
int main()
{
    int t;
    cin>>t;
    while(t--){
    int m,n;
    cin>>m>>n;
    string number = to_string(pow(n,2));
    int divisor =m*2;
    string ans= longDivision(number, divisor);
    for(int i=0;i<ans.size();i++){
        if(isdigit(ans[i])){
            continue;
        }
        else{
            ans=ans.substr(0,i);
            break;
        }
    }
    cout<<ans<<"\n";
    }
    return 0;
}

