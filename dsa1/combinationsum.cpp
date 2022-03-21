#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void f(vector<int>v,vector<int>v2,int i,int s,int sum)
{
    if(s>sum) return;

    // if(i==v.size())
    // {
    // if(i==v.size()){
    
        if(s==sum)
        {
            ans.push_back(v2);
            return;
        }
    // }
    // }
    for(int j=i;j<v.size();j++)
    { 
    if(s+v[j]<=sum){
    v2.push_back(v[j]);
    f(v,v2,j,s+v[j],sum);
    v2.pop_back();
    // f(v,v2,i+1,s,sum);

    }

}
}

int main()
{
    vector<int>v={2,3,6,7};
    int sum=7;
    f(v,{},0,0,sum);
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}