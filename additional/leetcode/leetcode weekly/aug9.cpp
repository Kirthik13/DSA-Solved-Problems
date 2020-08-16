#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
  stack<char>v;
for(char c:s){
    if(v.empty()){
        v.push(c);
    }
    else if(c>=65 && c<=90 && c+32==v.top()){
        v.pop();
    }
    else if(c>=97 && c<=122 && c-32==v.top()){
        v.pop();
    }
    else{
        v.push(c);
    }
}
string res="";

while(!(v.empty())){
    res+=v.top();
    v.pop();
}

reverse(res.begin(),res.end());
cout<<res;





}
       

