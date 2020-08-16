#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x;
    cin>>x;
    if(1<=x&&x<=1000000) {
        
int a[]={1,2,3,4,5};
int p=x/5;
int q=0;



    if(x%5==0){
        
    for(int i=0;i<5;i++){
           if(p==1){
            cout<<p+q;
            break;
        }
     
  else if(a[i]==p){
            q=1;
            cout<<p+q;
            break;
        }
        else if(p==0){
            q=1;
    
             cout<<p+q;
             break;
        }
        else{
    
         
            cout<<p+q;
            break;
        }
    }
    }
    else {
         for(int i=0;i<5;i++){
             
     if(a[i]==p){
            q=1;
            
            cout<<p+q;
              break;
        }
        else{
       
          q=1;
            cout<<p+q;
            break;
        }
    }

    }
}
    
    else{
        exit(1);
    }

}