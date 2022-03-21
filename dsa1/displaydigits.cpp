#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5269,rem=0;

 
    int p=1;

    int tem=n;
    while(tem>=10)
    {
        tem=tem/10;
        p=p*10;
    }

    tem=n;
    while(p!=0)
    {
        cout<<tem/p<<endl;

        tem=tem%p;
        p=p/10;
    }
}