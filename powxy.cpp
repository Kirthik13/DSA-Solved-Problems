#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=2,y=5,res=1;
    while(y>0)
    {
        if(y%2!=0)
        {
            res=res*x;
            y--;
        }
        x=x*x;
        y=y/2;

        // cout<<

    }
    cout<<res;
}
