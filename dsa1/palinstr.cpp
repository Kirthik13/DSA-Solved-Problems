#include<bits/stdc++.h>
using namespace std;
bool ispalin(string s,int i)
{
    if(i==s.size()/2)
    {
        
        return true;
    }
    if(s[i]!=s[s.size()-1-i])
    {
        return false;
    }
    else{
        return ispalin(s,i+1);
    }
}
int main()
{
    string s="mddam";
    cout<<ispalin(s,0);
}