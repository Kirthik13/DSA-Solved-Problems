#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
int main()
{
    string s;
    cin>>s;

    string t;
    cin>>t;
    // reverse(all(t));

    int m=s.size();
    int n=t.size();

    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

    for(int i=0;i<=m;i++)
    {
        dp[i][0]=0;
    }
    for(int j=0;j<=n;j++)
    
    {
        dp[0][j]=0;
        // if(i==0 or j==0)
        // {
        // dp[i][j]=0;
        // }
    }

    // }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
             
            if(s[i - 1] == t[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] =  max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    string res;
    int i=m;
    int j=n;
  while(i>0 && j>0)
    {
        if(s[i-1]==t[j-1])
        {
            res+=s[i-1];
            i--;
            j--;
        }
        else
        {
            if(dp[i-1][j]>dp[i][j-1])
            {
                res+=s[i-1];
                i--;
            }
            else
            {
                res+=t[j-1];
                j--;
            }
        }

    }
    while(i>0)
    {
        res+=s[i-1];
        i--;
    }
    while(j>0)
    {
        res+=t[j-1];
        j--;
    }

 
    reverse(all(res));
    cout<<res;
    // cout<<dp[m][m];
}
