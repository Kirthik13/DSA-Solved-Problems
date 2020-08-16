#include<bits/stdc++.h>
using namespace std;
int main(){
   long int d1,d2,d3;
    cin>>d1>>d2>>d3;
    vector<int>v;
    v.push_back(d1);
    v.push_back(d2);
    v.push_back(d3);
    long int sum1=0;

        long int sum2=0;
        long int sum3=0;
        long int sum4=0;
         for(auto i=0;i<1;i++){
    sum1=v[0]+v[1]+v[2];
     sum2=(v[0]*2)+(v[1]*2);
     sum3=(v[1]*2)+(v[2]*2);
     sum4=(v[0]*2)+(v[2]*2);
    
 }
 vector<int>v2;
 v2.push_back(sum1);
 v2.push_back(sum2);
 v2.push_back(sum3);
 v2.push_back(sum4);

// for(auto i :v2){
//     cout<<i<<"  ";
// }
// cout<<endl;
 auto min=min_element(v2.begin(),v2.end());
int min1=*min;
                cout<<min1;

}