#include<bits/stdc++.h>
using namespace std;
int f(vector<int>v,vector<int>v2,int i,int s,int sum)
{
    if(s>sum) return 0;
    if(i==v.size())
    {
        if(sum==s)
        {
            return 1;
        }
        return 0;
    }
    // v2.push_back(v[i]);
    int l=f(v,v2,i+1,s+v[i],sum);
    // v2.pop_back();
    int r=f(v,v2,i+1,s,sum);
    return l+r;
}
int main()
{
    vector<int>v={1,1,1,1,2,5};
    int sum=2;
    cout<<f(v,{},0,0,sum);
}