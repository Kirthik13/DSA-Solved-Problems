#include<bits/stdc++.h>
using namespace std;
int pw(int a,int b,int m)
{
    
    if(b==0)
    {
        return 1;
    }
    if(b%2==0)
    {
        int t=pw(a,b/2,m);
        return (1LL*t*t%m);
    }
    else{
         int t=pw(a,(b-1)/2,m);
         t=(1LL*t*t)%m;
        return (1LL*a*t%m);
    }


}
int main()
{
    int a,b,m;
    cin>>a>>b>>m;
    int res1=(a/b)%m;

    a=a%m;
    int inv=pw(b,m-2,m);
    int res2=a*inv%m;
    cout<<res1<<" "<<res2;
}