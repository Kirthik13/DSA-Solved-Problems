#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={23,5,10,17,30};vector<int> b={26,134,135,14,19};
   vector<pair<int,int>>v;
    //Complete this method
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int n=a.size();
    for(int i=0;i<n;i++){
        int c=abs(a[i]-0);
        auto it=lower_bound(b.begin(),b.end(),c);
        if(it!=b.end()){
            v.push_back({a[i],*it});
        }
    }
    // sort(v.begin(),v.end());
    int res=INT_MAX;
    int f{},s{};
    for(auto i:v){
        // res=min(abs(i.first-i.second),res);
        if(abs(i.first-i.second)<res){
            f=i.first;
            s=i.second;
            res=abs(i.first-i.second);
        }
    }
    cout<<f<<" "<<s;
    }