#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
 
v.push_back(a);
    
}

  

    int cost = 0; 
  

    sort(v.begin(), v.end()); 
  
   
    int K = v[n / 2]; 
  
 
    for (int i = 0; i < n; ++i) 
      {  
          cost += abs(v[i] - K); 
      }

    if (n % 2 == 0) { 
        int tempCost = 0; 
  
        K = v[(n / 2) - 1]; 
   
        for (int i = 0; i < n; ++i) 
            tempCost += abs(v[i] - K); 
  
       
        cost = min(cost, tempCost); 
    } 
  for(auto i:v){
      cout<<i<<" ";
  }
 cout<<endl;
cout<< cost/2; 

  
 

return 0;
}