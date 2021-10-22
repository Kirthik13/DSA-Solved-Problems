#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1={-1,5,10,20,3};
    vector<int>v2={26,134,135,15,17};
sort(begin(v2),end(v2));
int p1,p2;
int diff=INT_MAX;
for(auto x:v1){
    auto lb=lower_bound(begin(v2),end(v2),x)-begin(v2);

    if(lb>=1 and x-v2[lb-1]<diff){
        diff=x-v2[lb-1];
        p1=v2[lb-1];
        p2=x;
    }
    if(lb!=v2.size() and v2[lb]-x < diff){
         diff=v2[lb]-x;
        p2=v2[lb-1];
        p1=x;
    }
    
}
cout<<p1<<" "<<p2<<endl;
}
