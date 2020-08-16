#include<iostream>
#define N 100
using namespace std;

void dele(int *A,int *n){
        for(int i=0;i<(*n);i++){
        for(int j=i+1;j<(*n);j++){
            if(*(A+i)==*(A+j)){
                for(int k=j;k<(*n);k++){
                    *(A+k)=(*(A+k+1));
                
                     
                }
                (*n)--;
               
            }
        }
    }
        
         for(int i=0;i<(*n);i++){
        for(int j=i+1;j<(*n);j++){
            if(*(A+i)==*(A+j)){
                for(int k=j;k<(*n);k++){
                    *(A+k)=(*(A+k+1));
                
                     
                }
                (*n)--;
               
            }
        }
    }
 
}



int main(){
  
    int A[N];
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
dele(A,&n);

    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}