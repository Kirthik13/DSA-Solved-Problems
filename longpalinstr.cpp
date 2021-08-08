// #include <bits/stdc++.h>
// using namespace std;
// #define all(x) x.begin(), x.end()
// bool ispalin(sing s){
//     int i=0;int j=s.size()-1;
//     if(s.size()==1){
//         return 1;
//     }
//     while(i<j){
//         if(s[i]!=s[j]){
//             // cout<<"s[i] : "<<s[i]<<" "<<"s[j] :  "<<s[j]<<endl;
//             return 0;
//         }
//         i++;
//         j--;

//     }
//     return 1;
// }
// int main(){
//     sing s;
//     cin>>s;
//     sing res;
//     if(s.size()==1){
//         cout<<s;
//     }
//         for(int i=0;i<s.size();i++){
//         for(int j=i+1;j<s.size();j++){
//         //    cout<<s.subs(i,j-i+1)<<endl;
//             if(ispalin(s.subs(i,j-i+1))){
//                 sing k=s.subs(i,j-i+1);
//                 // cout<<k<<endl;
//                 if(res.size()<k.size()){
//                 res=s.subs(i,j-i+1);
//                 }
//             }
//         }
//     }
//     if(res.size()==0){
//         return s[0];
//     }
//     cout<<res;
// }








#include<bits/stdc++.h>
using namespace  std;
int main(){
string s;
cin>>s;
int n=s.size();
int dp[n+1][n+1];
memset(dp,0,sizeof(dp));
int maxi=INT_MIN;
for(int i=0;i<n;i++){
    dp[i][i]=1;
    maxi=1;
}
int st{};
for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
        dp[i][i+1]=1;

        st=i;
        maxi=2;

    }
    
}
for(int k=3;k<=n;k++){
for(int i=0;i<=n-k;i++){
    int j=i+k-1;
    if(s[i]==s[j] and dp[i+1][j-1]==1){
        dp[i][j]=1;
        if(k>maxi){
        maxi=max(k,maxi);
        st=i;
        }
    }
}
}




cout<<maxi;
cout<<s.substr(st,maxi);
}