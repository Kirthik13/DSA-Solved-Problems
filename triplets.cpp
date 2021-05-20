#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,4,5,1,3,2,12,0};
    int tar=8;
    sort(v.begin(),v.end());
    vector<vector<int>>res;
    for(int i=0;i<v.size()-2;i++){
        int j=i+1;
        int k=v.size()-1;

        while(j<k){
        int curr=v[i];
            curr+=v[j];
            curr+=v[k];
            // cout<<curr<<" ";
            if(curr==tar){
                res.push_back({v[i],v[j],v[k]});
                j++;
                k--;
            }
            else if(curr>tar){
                k--;

            }
            else{
                j++;
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