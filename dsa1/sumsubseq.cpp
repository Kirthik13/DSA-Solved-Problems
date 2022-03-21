#include<bits/stdc++.h>
using namespace std;
bool f(vector<int>v,vector<int>v2,int i,int s,int sum)
{
    if(i==v.size())
    {
        if(sum==s){
        for(auto i:v2)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        return 1;
        }
        return 0;


    }
    v2.push_back(v[i]);
    if(f(v,v2,i+1,s+v[i],sum))
    {
        return 1;
    }
    v2.pop_back();
    if(f(v,v2,i+1,s,sum))
    {
        return 1;
    }
    return 0;
}
int main()
{
    vector<int>v={1,1,2,5};
    vector<int>v2;
    int sum=2;
    bool g=f(v,v2,0,0,sum);
}