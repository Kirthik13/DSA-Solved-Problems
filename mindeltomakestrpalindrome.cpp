#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
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
    cout<<m-dp[m][m];

}