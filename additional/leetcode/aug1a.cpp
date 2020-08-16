#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0;
vector<int>v;
for(int i=0;i<s.size();i++){
    int d=int(s[i]);
    v.push_back(d);
}

for(auto i=v.begin();i!=v.end();i++){
if(*i<97){
    c++;
}
}
if(c==0  || c== s.size()){
    cout<<"True";
}
else{
    if(v[0]<97 && c==1){
     cout<<"True";
    }
    else{

    cout<<"False";
    }
}
}