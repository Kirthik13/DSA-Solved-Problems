#include<bits/stdc++.h>
using namespace std;
#define nx '\n'
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define foi(i) for(auto i=v.begin();i!=v.end();i++)
#define foe(i,v) for(auto i:v){}
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) std::cout << #x << "=" << x << endl
#define deb2(x, y) std::cout << #x << "=" << x << "," << #y << "=" << y << endl
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

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];

void solve() {
    int n,i;

    sl(n);
 vi v;
    fo(i,n){
        int k;
        cin>>k;
        v.pb(k);
    }
    sortall(v);


    int res=-1;

 
    bool check=true;
    int max=0;
    bool ch=false;
    int ss=0;
if (all_of(v.begin(), v.end(), [&] (int i) {return i == v[0];})){
    //all are the same
cout<<0;
}

    



else{
 while(check){
     int i;
     for(auto i:v){
         cout<<i<<" ";
     }

cout<<endl;
set<int>S(v.begin(),v.end());
if(S.size()==1){
    check=false;
    res++;
}
auto maxi=*max_element(v.begin(),v.end());
for(int i=0;i<n;i++){
    if(v[i]!=maxi){
        ss=v[i];
    }
    else{
        break;
    }
}
int smax=maxi-ss;

    


for(int j=0;j<n;j++){
    if(v[j]>ss){
        
        v[j]=v[j]-smax;
    }
}



res++;

  

}
std::cout<<res;
}

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), std::cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}


