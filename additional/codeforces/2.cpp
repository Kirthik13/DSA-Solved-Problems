#include<bits/stdc++.h>
using namespace std;

int main(){
int w;
cin>>w;
if(1<=w&&w<=100){
   
    if(w%2!=0||w==2){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    
}
else{
    exit(1);
}
}