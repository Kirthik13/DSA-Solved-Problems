#include<bits/stdc++.h>
using namespace std;

int main()
{
 vector<int>v={30,20,150,100,40};


    int n=v.size();
    unordered_map<int,int>m;
    int c=0;
    for(int i=0;i<n;i++)
    {
        int a=v[i]%60;
        if(a==0)
        {
            c+=m[0];
        }
        else{
            c+=m[60-a];
        
        }
        m[a]++;
    }
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    cout<<c;
}