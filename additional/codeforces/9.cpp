#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
     if(1<=a&&a<=b&&b<=10) {
     
 
    if(a<=b){
           int count=0;
        while(a<=b){
            a=a*3;
            b=b*2;
            count++;
        }
         cout<<count;

    }
    
    else{
        exit(1);
    }
   
    }
    else{
        exit(1);
    }
}