#include<bits/stdc++.h>
using namespace std;
int main(){
    
 

    vector<int>v2;
    
    
    for(int i=0;i<4;i++){
        int a;
        char b;
    cin>>a;
    v2.push_back(a);



    }
     string s;
    cin>>s;

    int count=0;
    for(int i=0;i<s.size();i++){
if(s[i]=='1'){
   
count+=v2[0];
    
}
else if(s[i]=='2'){
     
    count+=v2[1];

      
}
else if(s[i]=='3'){
    
count+=v2[2];

      
}
else if(s[i]=='4'){
  
count+=v2[3];


    
}
    }

cout<<count;
}