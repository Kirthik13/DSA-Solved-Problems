#include<bits/stdc++.h>
using namespace std;
int fn(int n)
{
    int c{};
    int i=5;
    while(n/i>0)
    {
        c=c+n/i;
        i*=5;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<fn(n);
}
