#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>v={1,2,1,2,1,1,1,3};
auto m=2;
auto k=2;
map<vector<int>,int>p;
vector<vector<int>>v1;
vector<int>v3;
int index=m;
for(int i=m-1;i<v.size();i=i+m){

    int j=i;
    while(index--){
 
        v3.push_back(v[j]);
        j--;
    }
   index=m;
    
   reverse(v3.begin(),v3.end());
    v1.push_back(v3);
    v3.clear();

}
for(auto i:v1){
    cout<<endl;

    for(auto j:i){
        cout<<j<<" ";
       
    }
}
cout<<'\n';
for  (const auto & i : v1)
    {
        p[i]++;
    }

cout<<"res : "<<endl;
bool check=false;
for(auto i:p){
   
    for(auto j:i.first){
        cout<<j<<" ";
  
    }
    cout<<":";
    cout<<i.second<<endl;
    if(i.second>=k){
        
        check=true;
    }
}
auto sam=0;
// for(auto i:p){
//     sam=max(i.second,sam);
// }
// for(auto i:p){
//     if(i.second)
// }

//    check?cout<<"yes":cout<<"no";






return 0;
}