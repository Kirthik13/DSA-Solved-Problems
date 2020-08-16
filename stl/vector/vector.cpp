#include<bits/stdc++.h>
#include<vector>
#define cc cout<<endl
using namespace std;
int main(){

    vector<int>a;
    a.emplace_back(12);
    a.emplace_back(324);
    a.emplace_back(24);
    a.emplace_back(24);

 // i=a.end();
  //cout<<*i;
  vector<int>v3(a);
vector<int>v2(5,10);
 // for(i=v2.begin();i!=v2.end();i++){
     
  //cout<<(*i)<<" ";
 
  //}
 //for(int &it:v2){
   //  cout<<endl<<" "<<it;

 //}
 //cout<<v3.back();
   
   /*
for(auto i=v3.rbegin();i!=v3.rend();i++){
cout<<*i<<" ";
}
cout<<endl;
int arr[]={1,4,8,12,1223,325,236};
v3.assign(arr,arr+7);
v3.assign(v3.begin(),v3.begin()+3);
vector<int>x(5);
copy(arr+0,arr+5,x.begin());

//for(auto i=vv.rbegin();i!=vv.rend();i++){
//cout<<*i<<" "; 
//}

for(auto i:x){
cout<<i<<" ";
}
cc;
x.erase(x.begin()+1);
for(auto i:x){
cout<<i<<" ";
}
cc;
x.erase(x.begin(),x.begin()+1);
for(auto i:x){
cout<<i<<" ";
}
x.insert(x.begin()+1,98);
cc;
for(auto i:x){
cout<<i<<" ";
}
cc;
x.at(0)=75;
cc;
for(auto i:x){
cout<<i<<" ";
}*/
vector<int>x(3,25);

x.insert(x.begin(),v2.begin(),v2.begin()+2);
cc;
for(auto i:x){
cout<<i<<" ";
}
cc;
cout<<x.size(); 
x.swap(v3);
for(auto i:x){
cout<<i<<" ";
}
cc;
for(auto i:v3){
cout<<i<<" ";
}
cc;
x.clear();
cout<<x.empty();
v3.resize(3);
cc;
cout<<v3.capacity();
cc;
for(auto i:v3){
cout<<i<<" ";
}
v3.shrink_to_fit();

cc;
for(auto i:v3){
cout<<i<<" ";
}
}
