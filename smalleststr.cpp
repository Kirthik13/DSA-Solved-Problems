#include<bits/stdc++.h>
using namespace std;
bool comps(string a,string b){
    return a+b<b+a;
}
int main(){
    vector<string>v={"a","ab","aba"};
  sort(v.begin(),v.end(),comps);
  for(auto i:v){
      cout<<i;
  }
}
  