#include<bits/stdc++.h>
using namespace std;
int main(){
    
  
    stringstream ss;
    string s="krithik";
    ss.str(s);
 char x[s.size()];
 for(int i=0;i<s.size();i++){
   ss>>x[i];
   
 }
 for(int i=0;i<s.size();i++){
  cout<<x[i]<<" ";
   
 }
}