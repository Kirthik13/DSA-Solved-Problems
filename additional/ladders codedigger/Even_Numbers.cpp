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
#define at auto
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


void solve() {
  ll i, j, n, m;
  cin>>n;
  if(n&1){
      cout<<n<<nx;
      return;
  }

   string s =bitset<64>(n).to_string();
    deque<char>dq(all(s));
    
  
  while(!dq.empty()){
       
                if(dq.front()=='0'){

            dq.pop_front();
                }
                else{
                    break;
                }

        
        
    }

    reverse(all(dq));
    string s2(all(dq));
// int ab;
    int ab=bitset<64>(s2).to_ulong();
cout<<ab<<nx;
}



int main() {
 

    int t = 1;
    cin >> t;
    while(t--) {
       solve();
    }

    return 0;
}

