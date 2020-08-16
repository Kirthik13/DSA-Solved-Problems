#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char>v;
    vector<char>v2;
    for(int i=0;i<s.size();i++){
    v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
    if(v[i]!='+'){
        v2.push_back(v[i]);
        if(i!=v.size()-1){
        v2.push_back('+');
        }
    }
    }
    


 
    v=v2;
     for(auto i:v2){
        cout<<i;
    }


}