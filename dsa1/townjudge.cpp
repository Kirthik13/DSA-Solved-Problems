#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;
    vector<vector<int>>v={{1,2},{2,3}};
    // unordered_map<int,int>m;
    set<int>s;
    for(auto i:v)
    {
        s.insert(i[1]);
    }
    if(s.size()>1)
    {
        cout<<-1;
    }
    else{
        cout<<*s.begin();
    }
    // for(auto i:v)
    // {
    //     m[i[0]]++;
    // }
    // int ans=-1;
    // for(int i=1;i<=n;i++)
    // {
    //     // cout<<"i : "<<i<<endl;
    //     if(m.find(i)==m.end())
    //     {
    //         ans=i;
    //     }
    // }
    // for(auto i:m)
    // {
    //     cout<<i.first<<endl;
    // }
    // cout<<ans;
}