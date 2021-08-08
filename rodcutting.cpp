#include <bits/stdc++.h>
using namespace std;
int dp[1002][1002];
int rod(vector<int> length, vector<int> price, int n, int s)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (i == 0 or j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if (length[i - 1] <= j)
            {
                dp[i][j] = max(price[i - 1] + dp[i][j - length[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][s];
}
int main()
{
    memset(dp, -1, sizeof(dp));

    vector<int> length = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> price = {1, 5, 8, 9, 10, 17, 17, 20};
    int s = length.size();
    int n = price.size();

    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=s;j++){
    //         // if(i==0 and j==0){
    //         // dp[i][j]=0;
    //         // }
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout << rod(length, price, n, s);
     }
    //  #include<bits/stdc++.h>
    //  using namespace std;
    //  int dp[1002][1002];
    //  int rod(vector<int> length,vector<int> price,int n,int s){
    //      if(n<0 or s<0){
    //          return 0;
    //      }
    //      if(dp[n][s]!=-1){
    //          return dp[n][s];
    //      }
    //     //  cout<<"s : "<<s<<"\n";
    //      if(s>=length[n-1]){
    //      return dp[n][s]=max(price[n-1]+rod(length,price,n,s-length[n-1]),rod(length,price,n-1,s));

    //      }
    //      else{
    //      return dp[n][s]=rod(length,price,n-1,s);
    //      }

    //  }
    //  int main()
    //  {
    // memset(dp,-1,sizeof(dp));

    // vector<int> length = {1, 2, 3, 4, 5, 6, 7, 8};
    // vector<int> price  = {1, 5, 8, 9, 10, 17, 17, 20};
    // int s=1;
    // int n=price.size();
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=s;j++){
    //         if(i==0 or j==0){
    //         dp[i][j]=0;
    //         }
    //     }
    // }
    // // for(int i=0;i<=n;i++){
    // //     for(int j=0;j<=s;j++){
    // //         // if(i==0 and j==0){
    // //         // dp[i][j]=0;
    // //         // }
    // //         cout<<dp[i][j]<<" ";
    // //     }
    // //     cout<<endl;
    // // }

    // cout<<rod(length,price,n,s);
    //  }
