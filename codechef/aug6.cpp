#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    deque<int>v1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    deque<int>v2(v1);

    // int i=0;
    deque<deque<int>>d;
    
    d.push_back(v2);
      do { 
        cout << v1[0] << " " << v1[1] << " " << v1[2] << "\n"; 
    } while ((v1.begin(),v1.end()));
  
// for(int i=0;i<)
 

// for(auto i : d)
//   {
//      for(auto j : i)
//         cout << j <<" ";
//      cout << "\n";
//   }
}



return 0;
}