#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
     string res;
        stack<char>st;
       int cnt=0;
      
         for(auto i:s){
        if(i=='('){
            if(cnt++){
                res+=i;
            }
        }
        else{
            if(--cnt){
                res+=i;
            }
        }
    }
       cout<<res;
}