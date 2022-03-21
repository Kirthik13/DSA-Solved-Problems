#include<bits/stdc++.h>
using namespace std;
void f(int a,int b,int sum,int n)
{
    // if(n<=1)
    // {
    //     // cout<<n<<" ";
    //     return n;
    // }
    // int l=f(n-1);
    // int sl=f(n-2);
   
    //  int g=l+sl;
    // //  cout<<g<<" ";
    //  return g;
    if(n!=0 )
    {
        cout<<a<<" ";
        sum=a+b;
        a=b;
        b=sum;

        f(a,b,sum,n-1);
    }
    // return;
}
int main()
{
//     for(int i=0;i<5;i++){
//    cout<<f(i)<<" ";
//     }
    f(0,1,0,4);
}