#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
int count=0;
int coun=0;
   for(int i=0;i<s.size();i++){
       if(int(s[i])>=97){
           count++;
       }
       else{
           coun++;
       }
   }
   if(count>=coun){
    transform(s.begin(),s.end(),s.begin(),::tolower);
   }
   else if(count<coun){
    transform(s.begin(),s.end(),s.begin(),::toupper);

   }
  
cout<<s;
}