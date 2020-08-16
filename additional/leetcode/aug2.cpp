#include<bits/stdc++.h>
using namespace std;
    deque<int>v;

 void add(int key) {
        v.push_back(key);
    }
    
    void remove(int key) {
        // for(auto  i=v.begin();i!=v.end();i++){
            
        // }
         v.erase(remove(v.begin(), v.end(), key), v.end());
    }
    
    bool contains(int key) {
         if(std::find(v.begin(), v.end(), key) != v.end())
{
  return true;
}
 else{
     return false;
 }       

    }
int main(){
  add(14);
    if(contains(14)){
        cout<<"af";
    }
    
  
for(auto i:v){
    cout<<i<<" ";
}
  
}