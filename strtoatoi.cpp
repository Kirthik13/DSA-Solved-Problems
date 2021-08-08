#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    
    long long res{};
    int ch=1;

    int i=s.find_first_not_of(' ');

    if(s[i]=='-' or s[i]=='+'){
        ch=(s[i++]=='-')?-1:1;
    }
    while(i<s.size() and (s[i]>='0' and s[i]<='9')){
        res=res*10+s[i++]-'0';
        if(res*ch>INT_MAX){
            cout<<INT_MAX;
            // return INT_MAX;
        }
        if(res*ch<INT_MIN){
            cout<<INT_MIN;
            // return INT_MIN;
        }
        
    }
    cout<<res*ch;

}