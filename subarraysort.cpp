// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v={1,2,3,4,4,5,8,6,6,7,9,9,10};
//     int lar=INT_MIN,sm=INT_MAX;
//     if(v.size()==2){
//         if(v.front()>v.back()){
//             cout<<"2"<<endl;
//             return;
//         }
//     }

//     int n=v.size();
//     int j{};
//      for(int i=1;i<n-1;i++){
//         if(!(v[i]>=v[i-1] and v[i]<=v[i+1])){
            
//             sm=v[i];
//             lar=max(lar,v[i]);
//             j=i;
//             break;
//         }
//     }
//     for(int i=j+1;i<n-1;i++){
//         if(!(v[i]>=v[i-1] and v[i]<=v[i+1])){
            
//             sm=min(sm,v[i]);
//             lar=max(lar,v[i]);
//         }
//     }

//     // cout<<sm<<endl;
//     int res1{},res2{};
//     for(int i=0;i<n;i++){
//         if(sm<v[i]){
//             res1=i;
//             break;
//         }
//     }

//     for(int i=n-1;i>=0;i--){
//         if(lar>v[i]){
//             res2=i;
//             break;
//         }
//     }
//     cout<<res1<<" "<<res2<<endl;
// }
#include<bits/stdc++.h>
using namespace std;
bool outof(vector<int>v,int i){
    if(i==0){
        return v[1]<v[0];
    }
    if(i==v.size()-1){
        return v[v.size()-2]>v.back();

    }
    return v[i]>v[i+1] or v[i]<v[i-1];

}
int main(){
    vector<int>v={1,2,3,4,4,5,8,6,6,7,9,9,10};
    int sm=INT_MAX,lar=INT_MIN;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(outof(v,i)){
            sm=min(sm,v[i]);
            lar=max(lar,v[i]);
        }
    }
    int i=0;
    int left=0;
    int right=0;

    while(sm>=v[i]){
        left++;
        i++;
    }
    i=v.size()-1;
    while(lar<=v[i]){
        right++;
        i--;
    }
cout<<left<<" "<<i<<endl;

}