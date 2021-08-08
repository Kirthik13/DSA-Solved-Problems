#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;

int main(){
    vector<int> v={0,3,7,2,5,8,4,6,0,1};
// int stas=*max_element(all(v));
// vector<int>  v2(stas+1,0);
// for(auto i:v){
//     v2[i]++;
// }
// int ans=INT_MIN;
// int msf=1;
// for(int i=1;i<v2.size();i++){
//     // cout<<"Asdafas";
//     if(v2[i-1]>0 and v2[i]>0 ){
//         msf++;
//         // cout<<i<<" "<<msf<<endl;
//     }
//     else{
//         msf=1;
//     }

//     if(msf>ans){
//         ans=msf;
//     }
// }
int ans{};
int msf=1;
sort(begin(v),end(v));
for(int i=1;i<v.size();i++){
    // cout<<"Asdafas";
    if(v[i-1]==v[i]-1 ){
        msf++;
        // cout<<i<<" "<<msf<<endl;
    }
    else{
        msf=1;
    }

    if(msf>ans){
        ans=msf;
    }
}
cout<<ans;
}