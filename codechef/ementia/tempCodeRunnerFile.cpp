#include<bits/stdc++.h>
using namespace std;
 int main(){
    long long int t;cin>>t;
    while(t--){
long long int n;
cin>>n;
vector<long long int>v;
long long int P1,P2;
for(long long int i=0;i<n;i++){
    long long int a;
    cin>>a;
    v.push_back(a);
}
long long int sumP1=0;
long long int sumP2=0;
for(long long int i=0;i<n;i++){
if(i&1 and i!=1){
        // cout<<"i1 : "<<i<<'\n';

  sumP1+=v[i];  
}
else{
    if(i!=0){
        // cout<<"i2 : "<<i<<'\n';

  sumP2+=v[i];
    }
    else if(i==0){
        // cout<<"i3 : "<<i<<'\n';
  sumP1+=v[i];  

    }  

}
    


}
// cout<<"sumP1 : "<<sumP1<<" sumP2 : "<<sumP2<<'\n';
    

if(sumP2==sumP1){
    cout<<"draw"<<'\n';
}
else if(sumP1>sumP2){
    cout<<"first"<<'\n';
}
else if(sumP2>sumP1){
    cout<<"second"<<'\n';

}

}
return 0;
}