#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    auto ip=count(v.begin(),v.end(),'a');
    int c=s.size();
    // cout<<ip;
while(1){
if(ip>c/2){
    cout<<c;
    break;
}
else{

c--;
}
}
}