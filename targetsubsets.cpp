#include<bits/stdc++.h>
using namespace std;
int subs(vector<int>v,int n,int x){
   
if(n==0){
     if(x==0){
        return 1;
    }
return 0;
}
   
    return subs(v,n-1,x-v[n-1])+subs(v,n-1,x);
    // return inc+exc;
}
int main(){
    vector<int>v={1,2,3,4,5};
    int target=5;
    int n=v.size();

    cout<<subs(v,n,target);
}
// #include<bits/stdc++.h>
// using namespace std;
// int subs(vector<int>v,int n,int i,int x){
   
// if(n==i){
//      if(x==0){
//         return 1;
//     }
// return 0;
// }
   
//     int inc= subs(v,n,i+1,x-v[i]);
//     int exc=subs(v,n,i+1,x);
//     return inc+exc;
// }
// int main(){
//     vector<int>v={1,2,3,4,5};
//     int target=5;
//     int n=v.size();

//     cout<<subs(v,n,0,target);
// }