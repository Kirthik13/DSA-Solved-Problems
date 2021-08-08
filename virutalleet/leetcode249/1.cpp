#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int>v(n);
    for(auto &i:v){
        cin>>i;
    }
    vector<int>ans(2*n);
    for(auto i=0;i<v.size();i++){
        ans[i]=v[i];
    }
    int j=0;
    for(auto i=v.size();i<2*v.size();i++){
        ans[i]=v[j++];
    }
    for(auto i:ans){
        cout<<i<<" ";
            }



}