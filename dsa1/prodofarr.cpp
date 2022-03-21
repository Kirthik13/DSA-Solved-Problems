#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int main()
{
    // vector<int>arr={5,2,2};

    //  int prod=1,n=arr.size();
    //  vector<int>pre(n+1,1);
    //  vector<int>suf(n+1,1);

    // for(int i=1;i<=n;i++ )
    // {
    //     // prod=(prod*arr[i])%mod;
    //     pre[i]=(pre[i-1]*arr[i-1])%mod;
    // }
    // for(int i=n-1;i>=0;i--)
    // {
    //     // arr[i]=(prod/arr[i])%mod;
    //     suf[i]=(suf[i+1]*arr[i])%mod;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     arr[i]=(pre[i]*suf[i+1])%mod;
    // }

    // for(auto i:arr)
    // {
    //     cout<<i<<" ";


    // }

    // int n=3;

    // vector<int>pre(n,1);
    // vector<int>suf(n,1);

    // vector<int>v={1,2,3};
    // int res=1;
    // for(int i=0;i<v.size();i++)
    // {
    //     pre[i]=res;
    //     res=v[i]*res;
    // }
    // res=1;
    // for(int i=v.size()-1;i>=0;i--)
    // {
    //     suf[i]=res;
    //     res=v[i]*res;
    // }
    

    // for(int i=0;i<v.size();i++)
    // {
    //     v[i]=pre[i]*suf[i];
    // }
    // for(auto i:v)
    // {
    //     cout<<i<<" ";
    // }


vector<int>v={1,2,3};
int n=v.size();
    vector<int>out(n,1);
    int prod=1;

    for(int i=0;i<v.size();i++)
    {
        out[i]=prod;
        prod*=v[i];
    }
    prod=1;
    for(int i=n-1;i>=0;i--)
    {
        out[i]=prod*out[i];
        prod=prod*v[i];
    }
    for(auto i:out)
    {
        cout<<i<<" ";
    }
}