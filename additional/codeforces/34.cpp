#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     int n;
    while(t--){
      cin>>n;
      vector<int>v;
      for(int i=0;i<n;i++){
          int a;
          cin>>a;
          v.push_back(a);
      }
      int f=0;
      sort(v.begin(),v.end());
      for(auto i=1;i<v.size();i++){
          if(v[i]-v[i-1]>1){
            //   vector<int>::iterator it=v[i-1];
            // auto it=find(v.begin(),v.end(),v[i]);
            //   v.erase(it);
            f=1;
             cout<<"NO"<<endl;
             break;

          }
      }
    //   cout<<"size  "<<v.size();
      if(f==0){
         
      
          cout<<"YES"<<endl;
      }

}
}