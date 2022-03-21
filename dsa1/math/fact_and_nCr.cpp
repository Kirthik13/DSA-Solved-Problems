#include<bits/stdc++.h>
using namespace std;
const int N=100000;
const int m=1000000007;
long long int fact[N],inv[N];
int pw(int a,int b)
{
    
    if(b==0)
    {
        return 1;
    }
    if(b%2==0)
    {
        int t=pw(a,b/2);
        return (1LL*t*t%m);
    }
    else{
         int t=pw(a,(b-1)/2);
         t=(1LL*t*t)%m;
        return (1LL*a*t%m);
    }


}
void fn()
{
    fact[0]=1;
    int i;
    for(i=1;i<=N;i++)
    {
        fact[i]=i*fact[i-1]%m;
    }
    i--;
    inv[i]=pw(fact[i],m-2);

    for(i--;i>=0;i--)
    {
        inv[i]=inv[i+1]*(i+1) %m;
    }
}

int ncr(int n,int r)
{
    if(n<r or r<0 or n<0) return 0;

    return fact[n]*inv[r]%m *inv[n-r]%m;
}
int main()
{
    int n,r;
    cin>>n>>r;
    fn();
    cout<<ncr(n,r);
       
}