#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
int main()
{
    string s;
    cin>>s;

    string t=s;
    reverse(all(t));

    int m=s.size();

    vector<vector<int>>dp(m+1,vector<int>(m+1,-1));

    for(int i=0;i<=m;i++)
    {
        dp[i][0]=0;
        dp[0][i]=0;
    }

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i-1]==t[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    string res;
    int i=m;
    int j=m;
    while(i>=1 and j>=1){
        
            if(s[i-1]==t[j-1])
            {
                res.push_back(s[i-1]);
                i--;
                j--;
            }
            else{
                if(dp[i-1][j]>dp[i][j-1])
                {
                // res.push_back(t[j-1]);
                    i--;
                }
                else{
                    // res.push_back(s[i-1]);
                    j--;
                }
            }
        
    }
    reverse(all(res));
    cout<<res;
    // cout<<dp[m][m];
}