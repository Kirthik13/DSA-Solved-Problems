// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// const int N = 3e5 + 5;
// ll a[N];
// int main()
// {
//     ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//     {
//         int x,y;
//         cin>>x>>y;
//         int k1=x+y+1;
//         int k2=x-y;
//         if(k2>m+1)
//         {
//             k2=m+1;
//         }
//         if(k1<0)
//         {
//             k1=0;
//         }
//         a[max(0,k2)]++;
//         a[min(m+1,k1)]--;
//     }
//     for(int i=1;i<=m;i++)
//     {
//         a[i]+=a[i-1];
//     }
//     int cnt{},ans{};
//     for(int i=0;i<=m;i++)
//     {
//         if(a[i]!=1)
//         {
//             cnt++;

//         }
//         else{
//             ans=max(ans,cnt);
//             cnt=0;
//         }
//     }
//     cout<<max(ans,cnt)<<endl;
// return 0;
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

const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

vi g[N];
ll a[N];

void solve() {
  int i, j, n, m;
   cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        int k1=x+y+1;
        int k2=x-y;
        if(k2>m+1)
        {
            k2=m+1;
        }
        if(k1<0)
        {
            k1=0;
        }
        a[max(0,k2)]++;
        a[min(m+1,k1)]--;
    }
    for(int i=1;i<=m;i++)
    {
        a[i]+=a[i-1];
    }
    int cnt{},ans{};
    for(int i=0;i<=m;i++)
    {
        if(a[i]!=1)
        {
            cnt++;

        }
        else{
            ans=max(ans,cnt);
            cnt=0;
        }
    }
    cout<<max(ans,cnt)<<nx;
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





