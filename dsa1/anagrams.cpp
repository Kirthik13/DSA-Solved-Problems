// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  string sortchar(string s)
  {
      int freq[26]={0};
      for(int i=0;i<s.size();i++)
      {
          freq[s[i]-'a']++;
      }
      int j=0;
      string res;
      while(j<26)
      {
          if(freq[j]==0)
          {
              j++;
          }
          else{
              res.push_back(j+'a');
              freq[j]--;
          }
      }
      return res;
  }
    vector<vector<string> > Anagrams(vector<string>& v) {
        //code here
        vector<vector<string> >res;
      unordered_map<string,vector<string>>m;
      for(int i=0;i<v.size();i++)
      {
          string s=v[i];
        //   sort(begin(s),end(s));
        s=sortchar(s);
          m[s].push_back(v[i]);
      }

      for(auto &i:m)
      {
          res.push_back(move(i.second));
      }
    return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends