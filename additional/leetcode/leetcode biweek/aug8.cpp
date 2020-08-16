#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;

    vector<int>v;
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<'\n';
    
 
  
 int j=1;
 int w=1000;
 vector<int>v3;
 int b=0;
 int q=0;
while(j!=w){
    q=0;
    for(int i=0;i<v.size();i++){
        if(j!=v[i]){
            q++;
        }
    }
    if(q==v.size()){
  v3.push_back(j);
    }
    j++;
}




for(auto i=0;i<v3.size();i++){
    if(i==k-1){
    cout<<v3[i]<<" ";
    }
}
}