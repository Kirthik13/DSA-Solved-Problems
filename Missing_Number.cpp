#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v;
while(1){
    int k;
    cin>>k;
    if(k==123){
        break;
    }
    v.push_back(k);

}
int sum = 0;
int idx = -1;
for (int i = 0; i < v.size(); i++) {
  if (v[i] == 0) idx = i; else sum += v[i];
}
int k=((v.size()+1)*(v.size()+2))/2;
cout<<k-sum;
}