#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // vector<vector<int>> res;
    // for (int i = 0; i < n; i++)
    // {
    //     vector<int> v(i+1, 1);

    //     if (res.size() > 0)
    //     {
    //         for (auto j = 1; j < res[i - 1].size(); j++)
    //         {
    //             int k = res[i - 1][j - 1] + res[i - 1][j];
    //             v[j] = k;
    //         }
    //         res.push_back(v);
    //     }
    //     else
    //     {
    //         res.push_back(v);
    //     }
    // }
    // for(auto i:res){
    //     for(auto j:i){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";
    // }
    vector<int> v(n + 1, 1);
    long long int res = 1;
    // cout<<res<<" ";
    int k = 1;
    for (int j = 0; j < n; j++)
    {

        res *= (n - j);
        res /= (j + 1);
        v[k++] = res;
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    // res=1;
}
