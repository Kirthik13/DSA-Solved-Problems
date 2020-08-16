#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
vector<int>p;
for(auto i=v.begin()+1;i!=v.end();i++){


     if(*i-*(i-1)==0){
p.push_back(*i);
       
        
        
     }
       
   
          

   
        }
   

    
   for(auto i:p){
       cout<<i<<" ";
   }




}
// better time complexity O(n):
     // vector<int>v;
//   for(int n:nums){
//       n=abs(n);
//       if(nums[n-1]>0){
//             nums[n-1]*=(-1);
          
//       }
//       else{
//           v.push_back(n);
//       }
//   }