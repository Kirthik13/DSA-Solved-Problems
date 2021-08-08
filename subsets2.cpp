#include<bits/stdc++.h>
using namespace std;
void sub(vector<int>v,int idx,map<vector<int>,int>&mt,vector<int>&v2,vector<vector<int>>&res){
    if(idx==v.size()){
        if(mt.find(v2)==mt.end()){
        // vector<int>v3=v2;
        // sort(begin(v2),end(v2));
        res.push_back(v2);
        mt.insert({v2,1});
        }
        return;
        // v2=v3;
        
    }
    sub(v,idx+1,mt,v2,res);
    v2.push_back(v[idx]);
    // sum+=v[idx];
    sub(v,idx+1,mt,v2,res);
    v2.pop_back();
}
int main(){
    vector<int>v={4,4,4,1,4};
    sort(begin(v),end(v));
   map<vector<int>,int>mt;
    vector<int>v2;
vector< vector<int>>res;
    sub(v,0,mt,v2,res);
for(auto i:res){
    for(auto j:i){
    cout<<j<<" ";
    }
    cout<<endl;
}


}
// #include<bits/stdc++.h>
// using namespace std;
// void sub(vector<int>v,int idx,map<vector<int>>&mt,vector<int>&v2){
//     if(idx==v.size()){
//         // vector<int>v3=v2;
//         // sort(begin(v2),end(v2));
//         mt.insert(v2);
//         // v2=v3;
        
//         return;
//     }
//     sub(v,idx+1,mt,v2);
//     v2.push_back(v[idx]);
//     // sum+=v[idx];
//     sub(v,idx+1,mt,v2);
//     v2.pop_back();
// }
// int main(){
//     vector<int>v={4,4,4,1,4};
//     sort(begin(v),end(v));
//    map< vector<int>>mt;
//     vector<int>v2;
//     sub(v,0,mt,v2);
// vector< vector<int>>res(begin(mt),end(mt));
// for(auto i:res){
//     for(auto j:i){
//     cout<<j<<" ";
//     }
//     cout<<endl;
// }


// }