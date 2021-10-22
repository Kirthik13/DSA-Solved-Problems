#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={4, 2, 2, 6, 4};
    int k=6;

    unordered_map<int,int>m;
    int a=0;
int cnt{};
    for(int i=0;i<v.size();i++){
        
       a^=v[i];
       if(m.count(a^k)>0){
           cnt+=m[a^k];
       }
       if(a==k ){
           cnt++;
       }
       if(m.find(a)!=m.end()){
           ++m[a];
       }
       else{
           m[a]=1;
       }
    }
    cout<<cnt;
}