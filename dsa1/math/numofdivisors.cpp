#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c{};
    cin>>n;
    vector<int>div(n+1,0);
    for(int i=1;i<=n;i++)
    {
      
        for(int j=i;j<=n;j+=i){
            div[j]++;
        }
        if(div[i]==2)
        {
            cout<<i<<" ";
        }
        
    }
    // for(auto i=1;i<=n;i++)
    // {
    //     cout<<div[i]<<" ";
    // }
    // cout<<c;
}