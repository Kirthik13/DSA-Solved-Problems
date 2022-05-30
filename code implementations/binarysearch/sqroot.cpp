#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int l=1;
    int r=100,ans{};
    while(l<=r) 
    {
        int mid=l+((r-l)/2);

        if(mid*mid==x)
        {
            ans=mid;
            break;
        }
        else if(mid*mid<x)
        {
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans;
}
