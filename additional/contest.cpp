#include<bits/stdc++.h>
using namespace std;
bool isprime(int num){
   
if(num<=1){
  return false;
}
for(int j=2;j<num;j++){
    if(num%j==0){
 return false;

    }
   

}
return true;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie();
cout.tie();
int n,m;
cin>>n>>m;
vector<int>a1;
for(int i=n;i<=m;i++){
string a=to_string(i);


string b=a.substr(a.size()/2,a.size()); 
int num=stoi(b);

a1.push_back(num);
}
for(auto i:a1){
    cout<<i<<" ";
}
cout<<'\n';
int count=0;
for(auto i=a1.begin();i!=a1.end();i++){
    if(isprime(*i)){
        count++;
    }
}


cout<<count;
}
