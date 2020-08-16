#include<bits/stdc++.h>
using namespace std;
#define N 100
int main(){
int n;
cin>>n;
if(1<=n&&n<=100){
for(int i=0;i<n;i++){
vector<char>v;
string s;
cin>>s;
int p=s.length();
if(p>10){
char c[p];
strcpy(c,s.c_str());
for(int i=0;i<p;i++){
    v.push_back(c[i]);
}


int b=0;
for(auto i=v.begin()+1;i!=v.end()-1;i++){
  
    b++;

}

auto ip=b;
cout<<v.front()<<ip<<v.back()<<endl;}
else{
    cout<<s<<endl;
}
}
}
else{
    exit(1);
}
}