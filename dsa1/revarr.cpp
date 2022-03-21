#include<bits/stdc++.h>
using namespace std;
void rev(vector<int>v,int i)
{
    if(i==v.size()/2)
    {
        for(auto i:v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    swap(v[i],v[v.size()-1-i]);
    rev(v,i+1);
}
int main()
{
    vector<int>v={1,2,5,3,4};
    rev(v,0);
}