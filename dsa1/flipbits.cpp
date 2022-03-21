#include<bits/stdc++.h>
using namespace std;
int fn(vector<int>&v,int n)
{
    int maxsf{},ans{};
    for(int i=0;i<n;i++)
    {
        maxsf+=v[i];
        ans=max(ans,maxsf);
        if(maxsf<0)
        {
            maxsf=0;
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>>v={{1,-1},{2,2}};
    int n=2,m=2,ans{};

    
    for(int l=0;l<m;l++)
    {
        vector<int>tem(n,0);

        for(int r=l;r<m;r++)
        {
            for(int i=0;i<n;i++)
            {
                tem[i]+=v[i][r];
            }
            int sum=fn(tem,n);

            ans=max(sum,ans);
        }
    }
    cout<<ans;
}