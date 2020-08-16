#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int c=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            
                if(i%2==0){
                    if((i/2)%2 != 0){
                        for(int k=1;k<m;k++){
            cout<<'.';

            }
                        cout<<'#';
                    

            
            break;        
            }
                
            else if ((i/2)%2 == 0){
                cout<<'#';
                   for(int k=1;k<m;k++){
                    cout<<'.';

            }
             
                   
                     break;
            }


                
                   
                    
                 
                    
            }
            else {
                cout<<'#';
            }
        }
             cout<<endl; 
        }
      
    }
