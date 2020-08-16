#include<bits/stdc++.h>
using namespace std;


int main(){
    multiset<int>ms;
    ms.insert(13);
    ms.insert(45);
    ms.insert(13);
    ms.insert(132);
    for(auto i:ms){
    cout<<i<<" "; 
}
cout<<endl;
multiset<int>ms2;
   ms2.insert(ms.find(45),ms.end());
for(auto i:ms2){
    cout<<i<<" ";
}cout<<endl;

ms2.erase(ms2.find(13),ms2.end());
for(auto i:ms2){
    cout<<i<<" ";
}cout<<endl;
auto i=ms2.count(45);
cout<<i;
}