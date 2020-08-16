#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int a[n][3];
    if(1<=n && n<=1000){
        
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
            
            cin>>a[i][j];
            
        }
        }
      

        int count=0;
        int flag=0;
       for(int i=0;i<n;i++){
           count=0;
           for(int j=0;j<3;j++){
               
               if(a[i][j]==1){
                  count++;
               }
      
           }
           
           if(count>=2){
               flag++;
           }
        
       }
       cout<<flag;
    }
}