#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v={5,4,3,2,1,1000000000};



int m=2;

 
sort(v.begin(),v.end());
    vector<int>pos;
    vector<int>force;
    cout<<v.size()<<endl;

m=m-1;
   for(int i=v.size()-1;i>0;i--){
       if(m!=0){
       int a=abs(v[0]-v[i]);
       pos.push_back(a);
       m--;
       }
       else{
           break;
       }
   }

    cout<<*min_element(pos.begin(),pos.end());


}