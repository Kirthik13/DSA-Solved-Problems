#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    int k=n;
    string s;
    while(k!=0)
    {
        s.push_back((k%2)+48);
        k/=2;
    }
    reverse(begin(s),end(s));
    // int i=0;
    // while(i<s.size() or s[i]!=1)
    // {
    //     if(s[i]==0){
    //     s.erase(s.begin());
    //     }
    //     i++;
    // }
    cout<<" s : "<<s<<endl;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            s[i]='1';
        }
        else{
            s[i]='0';
        }
    }
    cout<<" s : "<<s<<endl;
    int g=0;
    int ans=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        ans+=(s[i]=='1')?pow(2,g):0;
        g++;
    }
    cout<<ans;
}