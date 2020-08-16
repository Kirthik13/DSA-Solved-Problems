#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
char a[s.size()];
strcpy(a,s.c_str());
vector<char>v;
for(int i=0;i<s.size();i++){

v.push_back(a[i]);
}



 transform(v.begin(),v.begin()+1,v.begin(),::toupper);
for(auto i:v){
    cout<<i;
}


}