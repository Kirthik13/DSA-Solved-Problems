#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>s={1,3,0,5,8,8,5};
    vector<int>f={2,4,6,7,9,9,9};
    int res=1;
    int n=s.size();
        vector<pair<int,int>>v;
for(int i=0;i<n;i++){
    v.push_back({s[i],f[i]});
}
        // vector<pair<int,int>>ans;

sort(begin(v),end(v),[](auto a,auto b){
    return a.second<b.second;});
        // Your code here
     int t1=v[0].first;
int t2=v[0].second;
// ans.push_back({t1,t2});
// cout<<t1<<" "<<t2<<endl;
for(int i=1;i<n;i++){
    if( v[i].first>t1 and v[i].second>t2 ){
        if(t2<v[i].first ){
        t1=v[i].first;
        t2=v[i].second;
// ans.push_back({t1,t2});
        res++;
// cout<<t1<<" "<<t2<<endl;
        }

    }


}
// for(auto i:v){
//     cout<<i.first<<" "<<i.second<<endl;
// }
cout<<res;
}