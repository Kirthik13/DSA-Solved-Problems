#include<bits/stdc++.h>
using namespace std;
void f(vector<int>v,vector<int>v2,int i)
{
    if(i==v.size())
    {
        for(auto i:v2)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        return ;
    }
    v2.push_back(v[i]);
    f(v,v2,i+1);
    v2.pop_back();
    f(v,v2,i+1);
}
int main()
{
    vector<int>v={5,1,2};
    vector<int>v2;
    f(v,v2,0);
}