#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


const int N = 1000000;
// 
// bool sieve[N+1];



bitset<N+1>sieve;

vector<int> genprimes(int n)
{
    vector<int>res;
    for(int i=2;i<=n;i++)
    {
        if(sieve[i])
        {
            res.push_back(i);
        }
    }
    return res;
}
// void solve() {
  
// }

int main()
{
int t;
cin>>t;
// createsieve();
sieve.set();
sieve[0]=sieve[1]=0;
//   string pr(N+1,'1');
    // pr.set();
    // sieve[0]=sieve[1]='0';
    for(ll i=2;i<=N;i++)
    {   
        // cnt[i]=cnt[i-1]+int(pr[i])-48;
        if(sieve[i]==1 and i*i<=N){
        for(ll j=i*i;j<=N;j+=i)
        {
            sieve[j]=0;
        }
        }
    }

while(t--)
{
    ll  n, m;
  cin>>m>>n;
    vector<int>primes=genprimes(sqrt(n));
    int dummy[n-m+1];
   for(int i=0;i<n-m+1;i++)
   {
       dummy[i]=1;
   }
    for(auto i:primes)
    {
        int firstmul=(m/i)*i;
        if(firstmul<m)
        {
            firstmul+=i;
        }

        for(int j=max(i*i,firstmul);j<=n;j+=i)
        {
            dummy[j-m]=0;
        }
    }
    for(int i=m;i<=n;i++)
    {
        if(dummy[i-m])
        {
            if(i!=1){
            cout<<i<<endl;
            }
        }
    }
    cout<<endl;   
}
}