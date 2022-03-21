#include<bits/stdc++.h>
using namespace std;
int fn(vector<int>&v,int k)
{
     long long maxsf{},ans=INT_MIN;
    // cout<<ans<<endl;
    for(int i=0;i<v.size()+((v.size()*(k-1)));i++)
    {
        maxsf=maxsf+v[i%v.size()];

        ans=max(maxsf,ans);
        if(maxsf<0)
        {
            maxsf=0;
        }
    }
    return ans;
}
int main()
{
    vector<int>v={-1,3};
    // vector<int>v2=v;
    int ans{};
    int k=3;
    // for(int i=0;i<k-1;i++)
    // {
    //     v.insert(v.end(),v2.begin(),v2.end());
    // }
    int tots=accumulate(begin(v),end(v),0);
   
    // cout<<ans*(k-2);
    // for(auto i:v)
    // {
    //     cout<<i<<" ";
    // }
    if(tots<=0)
    {
        ans=fn(v,2);
    }   
    else{
        ans=fn(v,2);
        ans+=tots*(k-2);
    }
    cout<<ans;
}