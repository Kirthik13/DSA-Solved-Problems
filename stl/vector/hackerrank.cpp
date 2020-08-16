#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
     
    vector<int>v;
     int n;
      cin>>n;
      int a;
      for(int i=1;i<=n;i++){
          cin>>a;
          v.push_back(a);
      }
      
      int c;
      cin>>c;
     
   

     v.erase(v.begin()+(--c));


     int d,e;
     cin>>d>>e;
    
    
     
     v.erase(v.begin()+(--d),v.begin()+(--e));
     cout<<v.size()<<endl;
      for(auto i:v){
          cout<<i<<" ";
      }
  




    return 0;
}
