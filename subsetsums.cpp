#include<bits/stdc++.h>
using namespace std;
void big(vector<int>v,int N,vector<int>&res,int &sum){
 if(N==sum){
     
     cout<<endl;
    //  cout<<sum<<endl;
     for(auto i:res){
         cout<<i<<" "; 
     }
     cout<<"\n";
     return;
 }
 for(int i=0;i<v.size();i++)
 {
     if(sum+v[i]<=N){
         res.push_back(v[i]);
      sum+=v[i];
         big(v,N,res,sum);

          sum-=res.back();
         res.pop_back();
     }
    
 }
}
int main(){
    vector<int>v={1,2,3,4};
    int N=7;
    vector<int>res;
    int sum=0;
    big(v,N,res,sum);
}
// #include<bits/stdc++.h>
// using namespace std;
// void big(vector<int>v,int N,vector<int>&res,int sum){
//  if(N==sum){
     
//      cout<<endl;
//     //  cout<<sum<<endl;
//      for(auto i:res){
//          cout<<i<<" "; 
//      }
//      cout<<"\n";
//      return;
//  }
//  for(int i=0;i<v.size();i++)
//  {
//      if(sum+v[i]<=N){
//          res.push_back(v[i]);
//          big(v,N,res,sum+v[i]);
//         //   sum-=res.back();
//          res.pop_back();
//      }
    
//  }
// }
// int main(){
//     vector<int>v={1,2,3,4};
//     int N=7;
//     vector<int>res;
//     big(v,N,res,0);
// }