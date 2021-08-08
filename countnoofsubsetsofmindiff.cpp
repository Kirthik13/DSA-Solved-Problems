#include<bits/stdc++.h>
using namespace std;
int minct(int arr[],int n,int diff){
    int sum=accumulate(arr,arr+n,0);
    int f=((sum+diff)/2);
    int dp[n+1][f+1];
    // dp[0][0]=1;
 dp[0][0] = 1;
    for (int i = 1; i <= f; i++)
        dp[0][i] = 0;
    for (int i = 1; i <= n; i++)
        dp[i][0] = 1;
 
    //  for(int i=0;i<=n;i++){
    //     for(int j=0;j<=f;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    //     }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=f;j++){
            if(j>=arr[i-1]){
            dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
            }
            else{
                  dp[i][j]=dp[i-1][j];
            }
        }
    }
return dp[n][f];

}
int main(){
    
    int arr[]={1,1,2,3};
    int diff=1;
    int n=4;
    cout<<minct(arr,n,diff);
}