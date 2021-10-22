#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="111000";
    int n=s.size();
    s+=s;
    int c1{},c2{};
    for(int i=0;i<n;i++){
        if(i%2==0 and s[i]=='1') c1++;
        if(i&1 and s[i]=='0') c1++;
        if(i%2==0 and s[i]=='0') c2++;
        if(i&1 and s[i]=='1') c2++;

    }
    res=min(c1,c2);
    for(int i=n;i<s.size();i++){
        
    }
    
}