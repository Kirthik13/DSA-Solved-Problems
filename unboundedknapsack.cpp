#include<bits/stdc++.h>
using namespace std;

int dp[1002][1002];
int knapSack(int N,int W,int val[],int wt[]){
    // if(dp[N][W]!=-1){
    //     return dp[N][W];
    // }
    // if(N<=0 or W<=0){
    //     return dp[N][W]=0;
    // }
    // if(wt[N-1]>W){
    //     return dp[N][W]=knapSack(N-1,W,val,wt);
    // }
    // return  dp[N][W]=max( val[N-1]+knapSack(N,W-wt[N-1],val,wt),knapSack(N-1,W,val,wt));
    for(int i=0;i<=N;i++){
        for(int j=0;j<=W;j++){
               if(i==0 and j==0){
        dp[i][j]=0;
            }
        }}
    for(int i=1;i<=N;i++){
        for(int j=1;j<=W;j++){
         
            if(wt[i-1]<=j){
                dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[N][W];
}
int main(){
    int N=2;
    int W=3;
    int val[]={1,1};
    int wt[]= { 2, 1 };
// memset(dp,-1,sizeof(dp)) ;

cout<<knapSack(N,W,val,wt);
}
