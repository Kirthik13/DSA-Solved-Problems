#include<bits/stdc++.h>
using namespace std;
int canget(int n,int k)
{
    int i=5,c{};
    while(n/i>0)
    {
        c+=n/i;
        i*=5;
    }
    return c>=k;
}
int main()
{
    int n;
    cin>>n;
    int ans=INT_MAX;
    int l=1,r=5*n;
    while(l<=r)
    {
        int mid=l+((r-l)/2);

        if(canget(mid,n))
        {
            ans=mid;
            r=mid-1;
        }   
        else{
            l=mid+1;
        }
    }
    cout<<ans;

}
