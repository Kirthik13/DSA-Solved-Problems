#include<bits/stdc++.h>
using namespace std;
int main(){
   deque<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    if(*(v.begin())==*max_element(v.begin(),v.end()) && *(v.end()-1)==*min_element(v.begin(),v.end()) ){
        cout<<0;
        return 0;
    }
    else{
    int p=distance(v.begin(),max_element(v.begin(),v.end()));
    int q=distance(v.begin(),min_element(v.begin(),v.end()));
   int minn=*min_element(v.begin(),v.end());
  int z=0;
  int w=0;
int x;
// for(int i=0;i<=v.size();i++){

//     if(v[i]==v[p]){
//         if(i!=p){
//            x=i; 
//         }

//     }
// }
// cout<<x;
deque<int>mi;
mi.push_back(minn);
 deque<int>::iterator ip; 
      
    
    ip=find_end(v.begin(), v.end(), mi.begin(), 
                       mi.end()); 
     x=ip - v.begin();

    for(int i=x;i<=v.size()-2;i++){
        
     int te=v[i];
        v[i]=v[i+1];
        v[i+1]=te;
        w++;

    }
// cout<<x;

 deque<int>d2;
 d2=v;

 int d2mm=distance(d2.begin(),max_element(d2.begin(),d2.end()));

     for(int i=d2mm;i>=1;i--){
     int te=d2[i];
        d2[i]=d2[i-1];
        d2[i-1]=te;
z++;
    }


  
    int res=z+w;
   
        cout<<res;
    
}
}