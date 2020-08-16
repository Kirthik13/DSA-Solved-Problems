#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
  
    int count=0;
    // for(auto i=0;i<1;i++){
    //     if(v[i]<v[i+1]){
    //         count++;
    //     }
    //     else if(v[i]>v[i+1]){
    //         count++;
    //     }

    // }
     for(auto i=v.begin()+1;i!=v.end();i++){
        

     if(*i>*max_element(v.begin(),i)){
         
        count++;
      

    }
    else if(*i<*min_element(v.begin(),i)){
count++;


}
 
}
   cout<<count;
}