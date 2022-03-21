#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={98,2,3,4};
    int n=v.size();

    int mi,ma,i=0;
    if(n%2==0)
    {
        if(v[0]<v[1])
        {
            mi=v[0];
            ma=v[1];
        }
        else{

            ma=v[0];
            mi=v[1];
        }
        i=2;
    }
    else{
            ma=v[0];
            mi=v[0];
        i=1;
    }
    while(i<n-1)
    {
        if(v[i]>v[i+1])
        {
            ma=max(ma,v[i]);
            mi=min(mi,v[i+1]);
        }
        else if(v[i]<v[i+1])
        {
            ma=max(ma,v[i+1]);
            mi=min(mi,v[i]);
        }
        
        i+=2;
 
    }
    cout<<mi<<" "<<ma;
}