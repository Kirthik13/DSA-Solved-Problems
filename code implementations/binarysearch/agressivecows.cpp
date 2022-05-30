#include<bits/stdc++.h>
using namespace std;
bool cando(vector<int>&v,int mid,int c)
{
    int n=1,s=v.front();
    for(int i=1;i<v.size();i++)
    {
        if(v[i]-s>=mid)
        {
            // cout<<" v[i]-s : "<<v[i]-s<<endl;
            s=v[i];
            n++;
        }
    }
    // cout<<" n : "<<n<<endl;
    if(n>=c) return 1;
    return 0;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        vector<int>v(n);
        for(auto &i:v)
        {
            cin>>i;
        }

        sort(begin(v),end(v));
        int l=v[0],r=0,ans=INT_MAX;
        r=v.back()-l;
        while(l<=r)
        {
            // cout<<" l : "<<l<<" r : "<<r<<endl;
            int mid=l+((r-l)/2);
            // cout<<"mid : "<<mid<<endl;
            if(cando(v,mid,c))
            {
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        // cout<<"ans : "<<ans<<endl;
        cout<<ans<<endl;
    }
}