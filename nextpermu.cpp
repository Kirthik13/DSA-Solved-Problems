#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v={1,2,3};

int n=v.size();
int k{};
for(int i=n-2;i>=0;i--){
    if(v[i]<v[i+1]){
        k=i;
        break;
    }
}

for(int i=n-1;i>=0;i--){
    if(v[k]<v[i]){
        swap(v[k],v[i]);
        // k=i;
        break;
    }
}
reverse(begin(v)+k+1,end(v));
for(auto i:v){
    cout<<i<<" ";
}
}