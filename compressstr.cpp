#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abc";
    int n=s.size();
    int ch=s[0];
    int cnt=1;
vector<pair<char,int>>v;
for(int i=1;i<n;i++){
if(s[i]==ch){
    cnt++;
}
else{

v.push_back({ch,cnt});
    ch=s[i];
    cnt=1;
}
}
v.push_back({ch,cnt});
string res;
for(auto i:v){
    // cout<<i.first<<" "<<i.second;
   
    res.push_back(i.first);
    

        char t=char(i.second)+'0';
    res.push_back(t);

    
}
if(res.size()>s.size()){
    cout<<s;
}
else{
cout<<res;
}
// cout<<s;
}