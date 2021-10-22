#include<bits/stdc++.h>
using namespace std;
// int cw(int n,int dp[]){
    
//     if(n<0){
//         return 0;
//     }
//       if(n==0){
//         return dp[n]= 1;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
  
//     return dp[n]=cw(n-1,dp)+cw(n-2,dp)+cw(n-3,dp);
// }
int main(){
    int n;
    cin>>n;
int dp[n+1];
// memset(dp,-1,sizeof(dp));
dp[0]=1;
dp[1]=1;
dp[2]=2;
for(int i=3;i<=n;i++){

    dp[i]=dp[i-1]+dp[i-2]+dp[i-3];

}
cout<<dp[n];

// cout<<cw(n,dp);
}