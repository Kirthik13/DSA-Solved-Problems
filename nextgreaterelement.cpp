#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main(){

vector<int>v={1,2,3,4,5};
vector<int>res(v.size(),-1);
int n=v.size();
for(int i=0;i<v.size();i++){
    int j=i+1;
    while((j%n)!=i){
        if(v[j%n]>v[i]){
            res[i]=v[j%n];
            break;
        }
        j++;
    }
}
for(auto i:res){
    cout<<i<<" ";
}
}