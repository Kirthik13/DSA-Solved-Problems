#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,1,2,3};
    int diff=1;
    int n=v.size();
    int sum=accumulate(begin(v),end(v),0);
    sum=((diff+sum)/2);
    vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
    
    for(int i=0;i<=n;i++)
    {
        //  if(i==0){
                dp[i][0]=0;
            // }
            // if(j==0)
            // {
                // dp[]
            // }
    }
    for(int i=0;i<=sum;i++)
    {
        //  if(i==0){
                dp[0][i]=0;
            // }
            // if(j==0)
            // {
                // dp[]
            // }
    }
    dp[0][0]=1;
     // memset(dp,-1,sizeof(dp));
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<=sum;i++){
            dp[0][i]=0;
        }
         dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++){
           dp[i][j]=dp[i-1][j];

           if(j-v[i-1]>=0)
           {
               dp[i][j]=dp[i-1][j-v[i-1]]+dp[i][j];
           }

        }
    }
    //   }
    //   for(int i=1;i<=n;i++){
    //       for(int j=1;j<=sum;j++){
               
    //     // int k=cc(n,v,sum,i+1,dp);
    //     dp[i][j]=dp[i-1][j];
    //     if(j-v[i-1]>=0){
    //          dp[i][j]=dp[i][j]+ dp[i-1][j-v[i-1]];
    //     }
    //       }
    //   }
    cout<<dp[n][sum];

}