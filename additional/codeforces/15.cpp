#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
cin.tie();
cout.tie();
int n;
cin>>n;
if(1<=n&&n<=100){
   
    vector<string>v;
    
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            v.push_back("I");
            v.push_back("hate");
            if(n>i){
                v.push_back("that");}
                else if(n==i){
             v.push_back("it");
        }
        }
        else{
              v.push_back("I");
           
           
            v.push_back("love");
            if(n>i){
                v.push_back("that");}
                else if(n==i){
             v.push_back("it");
                }
        }
    }
   

    for(auto i:v){
        cout<<i<<" ";
    }

}


}