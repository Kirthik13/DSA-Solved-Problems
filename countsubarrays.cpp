#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,1,1};
    int k=2;
    int curr_sum{},ans{};

    unordered_map<int,int>m;
    for(auto i:arr){
        curr_sum+=i;

        if(curr_sum==k){
            ans++;
        }
        if(m.find(curr_sum-k)!=m.end()){
            // ans+=m[curr_sum-k];
            ans++;
        }

        m[curr_sum]++;
    }
    cout<<ans;
  
}