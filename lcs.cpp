#include <bits/stdc++.h>
using namespace std;
int main()
{
    string A = "geeks";
    string B = "geeksfor";
    string C = "geeksforgeeks";

    int a = A.size();
    int b = B.size();
    int c = C.size();
    int dp[a + 1][b + 1][c + 1];

    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            for (int k = 0; k <= c; k++)
            {
                if (i == 0 or j == 0 or k == 0)
                {
                    dp[i][j][k] = 0;
                }
                else if(A[i-1]==B[i-1] and A[i-1]==C[i-1]){
                    dp[i][j][k]=1+dp[i-1][j-1][k-1];
                }
                else{
                    dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
                }
            }
        }
    }
    cout<<dp[a][b][c];
}