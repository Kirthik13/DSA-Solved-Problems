#include<bits/stdc++.h>
using namespace std;
void sub(vector<int>v,int idx,int sum, multiset<int>&mt){
    if(idx==v.size()){
        mt.insert(sum);
        return;
    }
    sub(v,idx+1,sum,mt);
    // sum+=v[idx];
    sub(v,idx+1,sum+v[idx],mt);
}
int main(){
    vector<int>v={2, 3};
    multiset<int>mt;
    sub(v,0,0,mt);
vector<int>res(begin(mt),end(mt));
for(auto i:res){
    cout<<i<<" ";
}


}