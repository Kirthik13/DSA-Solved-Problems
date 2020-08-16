#include<bits/stdc++.h>
using namespace std;

int main(){
    
int n;
cin>>n;
if(1<=n<=100){
   
    
   pair<int,int>a[n];
   //int p[n], q[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        cin>>a[i].second;

    }
   
    int count=0;
    for(int i=0;i<n;i++){
      
       
        
       if(a[i].second-a[i].first>=2){
           
            
            count++;

        }
      
    }
    cout<<count;

}

else{
        exit(1);
    }



}