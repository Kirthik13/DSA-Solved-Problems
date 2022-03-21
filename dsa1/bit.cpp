#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="11111111111111101";

    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        int c=a[i]-48;
        sum=(sum<<1)|c;
    }
    cout<<sum;

   
}