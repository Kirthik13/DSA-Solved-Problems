#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v={{-5}};
    // vector<vector<int>>v={{1,5,9},{10,11,13},{12,13,15}};
    int k;
    cin>>k;
    multimap<int,int>m;
    for(auto i:v){
        for(auto j:i){
            m.insert({j,1});
        }
    }
// set<int>st;
// st.insert(1);

    // cout<<m[k+1];
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    auto it=m.begin();
    advance(it,k-1);

    cout<<it->first;


}