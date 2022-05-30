#include<bits/stdc++.h>
using namespace std;
bool itrsct( vector<pair<int,int>>&v,int mid)
{
    int f=v[0].first-(v[0].second*mid);
    int s=v[0].first+(v[0].second*mid);
    
    for(int i=1;i<v.size();i++)
    {
        int f1=v[i].first-(v[i].second*mid);
        int s1=v[i].first+(v[i].second*mid);
        f=max(f,f1);
        s=min(s,s1);
        if(s<f) return 0;
    }
    cout<<f<<" "<<s<<endl;
    return 1;
}
int main()
{
    vector<pair<int,int>>v={{1,1},{3,20},{11,1},{13,20}};
    int n=v.size();
    int l=0,r=1e7;
    int ans=INT_MAX;
    while(l<=r)
    {
        int mid=l+((r-l)/2);
        cout<<"mid : "<<mid<<endl;
        if(itrsct(v,mid))
        {
            ans=min(ans,mid);
            cout<<"ans : "<<ans<<endl;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans;
}