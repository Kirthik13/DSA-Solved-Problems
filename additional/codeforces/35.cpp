#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int sum=0;
        vector<int>v;
        int c=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a & 1){
                c++;
            }
            v.push_back(a);
        }
        int sum_ele=0;
  
   if(c==0){
       cout<<"No"<<'\n';
        continue;
   }
   else if(n==x and c%2==0){
        cout<<"No"<<'\n';
       continue;

   }
   else if(c==n and x%2==0){
        cout<<"No"<<'\n';
       continue;

   }
   else{
       cout<<"Yes"<<'\n';
       
   }
      

    }
}
