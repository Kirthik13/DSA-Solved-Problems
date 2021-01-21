#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v={1,1,1,1,1};
    for(auto i=1;i<n;i++){
        for(int j=1;j<=4;j++){
            v[j]+=v[j-1];
        }
    }
    cout<<accumulate(v.begin(),v.end(),0);
}