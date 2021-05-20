#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={0,1,0,2,1,0,1,3,2,1,2,1};
int m{};
    vector<int>r;
    deque<int>l;
    int mr=v[0];
    r.push_back(mr);
    for(auto i=1;i<v.size();i++){
        if(mr<v[i]){
            mr=v[i];

        }
        r.push_back(mr);
    }
  // use 
    int ml=v.back();
    l.push_back(ml);
    for(int i=v.size()-2;i>=0;i--){
        if(ml<v[i]){
            ml=v[i];

        }
        // cout<<v[i]<<" ";
        l.push_front(ml);
    }
// for(auto i:r){
//     cout<<i<<" ";
// }
// cout<<endl;
// for(auto i:l){
//     cout<<i<<" ";
// }
for(int i=0;i<r.size();i++){
    m+=min(r[i],l[i])-v[i];
}
cout<<m<<endl;


}