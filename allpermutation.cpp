#include<bits/stdc++.h>
using namespace std;
set<string>res;
int cnt{};
void sub(string &v,int l,int r){
    if(l==r){
        
        // cnt+=1;
      res.insert(v);
        return;
}

    for(int i=l;i<=r;i++){
        swap(v[l],v[i]);
        sub(v,l+1,r);
        swap(v[l],v[i]);
    }
}
int main(){
  string v;
  int p=9;
  for(int i=1;i<=p;i++){
      char c=char(i)+48;
      v.push_back(c);
  }
    int n=v.size();
    sub(v,0,n-1);
int k;
cin>>k;    
// while(
// cout<<res[k];
auto it=res.begin();
advance(it,k-1);
cout<<*it;
// for(auto i:it){
//     cout<<i<<" ";
// }


}