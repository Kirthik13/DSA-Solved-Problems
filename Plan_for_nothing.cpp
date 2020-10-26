#include<bits/stdc++.h>
using namespace std;
int a[1000005]={0};
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int m;
    cin>>m;
    for(int j=0;j<m;j++){
        int l,r;
        cin>>l>>r;
        a[l]+=1;
        a[r+1]-=1;
    }
}
for(int i=1;i<=1000000;i++){
    a[i]+=a[i-1];
}
int ans=-1;
for(int i=1;i<=1000000;i++){
    if(a[i]==0){
        ans=i;
        break;
    }
}
cout<<ans;
// for(auto i:a){
//     cout<<i<<" ";
// }
}