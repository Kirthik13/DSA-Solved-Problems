#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
int main(){
    vector<int>v={73,74,75,71,69,72,76,73};
    vector<int>res(v.size(),0);
    stack<int>s;
    for(int i=0;i<v.size()-1;i++){
        while(!s.empty() and v[s.top()]<v[i]){
            int j=s.top();
            s.pop();
            int k=i-j;
            res[j]=k;
        }
        s.push(i);
    }
    for(auto i:res){
        cout<<i<<" ";
    }
}