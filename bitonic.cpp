#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1, 15, 51, 45, 33, 
                   100, 12, 18, 19,};
                   int n=v.size();
    vector<int>mis(n);
    vector<int>mds(n);

    for(int i=0;i<v.size();i++){
        mis[i]=1;
        mds[i]=1;
    }
// longest 
            
for(int i=1;i<v.size();i++){
    for(int j=0;j<i;j++){
        if(v[j]<v[i] ){
            mis[i]=mis[j]+1;
            
        }
    }
}
for(int i=v.size()-2;i>=0;i--){
    for(int j=v.size()-1;j>i;j--){
        if(v[j]<v[i] ){
            mis[i]=mis[j]+1;
            // mds[i]++;
            
        }
    }
}

//max 

// for(int i=1;i<v.size();i++){
//     for(int j=0;j<i;j++){
//         if(v[j]<v[i] and mis[i]<mis[j]+v[i]){
//             mis[i]=mis[j]+v[i];
//         }
//     }
// }
// for(int i=v.size()-2;i>=0;i--){
//     for(int j=v.size()-1;j>i;j--){
//         if(v[j]<v[i] and mds[i]<mds[j]+v[i]){
//             mds[i]=mds[j]+v[i];
//         }
//     }
// }
int res=INT_MIN;
for(int i=0;i<v.size();i++){
    res=max(res,mis[i]+mds[i]-1);
}
cout<<res;
}
