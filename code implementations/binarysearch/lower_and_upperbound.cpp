#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,5,5,5,5,5,5,5,5,5,5,5,7,7,8,97};
    int l=0;
    int r=v.size()-1;
    int ans=0;
    int x;
    cin>>x;
    // //lower bound : -----------------------------------------------------------------
    while(l<=r)
    {
        int mid=(l+r)/2;
        
        if(v[mid]==x)
        {
            ans=mid;
            r=mid-1;
        }
        if(v[mid]<x)
        {
            l=mid+1;
        }
        else{
            ans=mid;
            r=mid-1;
        }

    }
    cout<<" lb : "<<ans;
    // // upper bound :--------------------------------------------------------------------
    l=0;
    r=v.size()-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        
        if(v[mid]==x)
        {
            // ans=mid;
            l=mid+1;
        }
       else if(v[mid]<x)
        {
            l=mid+1;
        }
        else{
            ans=mid;
            r=mid-1;
        }

    }
    cout<<" ub : "<<ans;
}
