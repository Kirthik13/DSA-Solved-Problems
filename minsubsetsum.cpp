#include <bits/stdc++.h>
using namespace std;

int minDiffernce(int arr[], int n)
{
    // Your code goes here
    int sum{};
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    bool dp[n + 1][sum + 1];
    dp[0][0] = 1;
    for (int i = 1; i <= sum; i++)
    {
        dp[0][i] = 0;
    }
    for (int j = 0; j <= n; j++)
    {
        dp[j][0] = 1;
    }
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (j <= arr[i - 1])
            {
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
            // cout<<"Ad";
            if (i == n)
            {
                if (dp[i][j])
                {
                    // cout<<"ASd";
                    v.push_back(j);
                }
            }
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=sum;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    int mn=INT_MAX;
    for(int i=0;i<sum/2;i++){
        mn=min(mn,abs(sum-2*v[i]));
    }
    return mn;
}
int main()
{
    int arr[] = {1, 5,6,11};
    int n = 4;
    cout << minDiffernce(arr, n);
}