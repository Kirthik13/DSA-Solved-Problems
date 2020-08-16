#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
   long long int t;
    cin>>t;
    while ( t--)
    {
           long long int n;
            cin>>n;
            vector<int>v;
               bool check=false;
            for(int i=0;i<n;i++){
              
               long long int a;
                cin>>a;
                v.push_back(a);
            }
            if(v.size()<3){
                cout<<"-1"<<'\n';
                break;
            }
            set<int>v1;
         
            long long int c=0;
            for(int i=2;i<n;i++){
                for(int j=i-1;j<=i-1;j++){
                    for(int k=j-1;k<=j-1;k++){
                        if(v[i]+v[j]<=v[k] || v[j]+v[k]<=v[i] || v[i]+v[k]<=v[j]){
                          
                            v1.emplace(i);
                            v1.emplace(j);
                            v1.emplace(k);
                            
                        }
                      
                    }
                }
                
            }
  
           
          long long int j=0;
       if(v1.empty()){
           cout<<"-1"<<'\n';
       }
       else{
    for (auto it=v1.begin(); it != v1.end(); ++it) {
    if(j<=2){
              
               
        cout <<*it+1<<"  ";
    }
         else{
                    break;
                } 
     j++;
} 
cout<<'\n';
                
            }
}
}    
    


