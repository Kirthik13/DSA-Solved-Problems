#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;

    float ans=(1.0*n/d);
    string s=to_string(ans);
    // while(s.back()=='0')
    // {
    //     s.pop_back();
    // }
    cout<<s<<endl;
    string res;
    
    int pt=0;
    int i=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            pt=1;
            res.push_back(s[i]);
            break;
        }
        if(s[i]!='.' and pt==0){
        res.push_back(s[i]);
        }
    }
    cout<<"res : "<<res<<endl;
    int j=i+1;
    char ch=s[i+1];
    while(j<s.size() and s[j]!='0')
    {
        j++;
    }
    if(j==s.size()){
    // if(s.size()-x>0)
    // {
        // if(s[i])
        // {
            res.push_back('(');
            res.push_back(s[i+1]);
            res.push_back(')');
        // }
    }
    else{
        if(s[j]=='0')
        {
            j--;
        }
        cout<<"j : "<<j<<endl;
        res+=s.substr(i+1,j-i);
    }
    if(res.back()=='.') res.pop_back();
    cout<<res;
}