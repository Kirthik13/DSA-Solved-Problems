#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>A={3, 34, 4, 12, 5, 2};
    int B=9;
        int n=A.size();
    int dp[n+1][B+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=B;j++){
           
            if(i==0 and j==0){
                  dp[i][j]=1;  
            }
            else if(i==0){
              dp[i][j]=0;  
            }
            else if(j==0){
                  dp[i][j]=1;  
            }
        }
    }

   for(int i=1;i<=n;i++){
        for(int j=1;j<=B;j++){
           if(j>= A[i-1]){
               dp[i][j]=(dp[i-1][j-A[i-1]])?dp[i-1][j-A[i-1]]:dp[i-1][j];
           }
           else{
               dp[i][j]=dp[i-1][j];
           }
        }
    }

    cout<< dp[n][B];
}