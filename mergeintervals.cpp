#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>intervals={{1,3},{2,6},{15,18},{8,10}};

    sort(intervals.begin(),intervals.end(),[](auto a,auto b){return a[0]<b[0];});
    // cout<<intervals.back().back();
    // for(auto i:intervals){
    //     for(auto j:i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<vector<int>>res;
    for(auto i:intervals){
        if(res.size()==0){
            res.push_back(i);
        }
        else{
            auto v2=res.back();
            auto v3=i;
            if(v2[1]>=v3[0]){
                res.back().back()=max(v2[0],v3[1]);
            }
            else{
                res.push_back(i);
            }
        }
    }
    
    for(auto i:res){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}