#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {-1, 1, -1, 1};
    int n = v.size();
    int ans{};
    int sum{};
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum == 0)
        {
            ans = i + 1;
        }
        else
        {
            if (m.find(sum) != m.end())
            {

                // else{
                ans = max(ans, i - m[sum]);
                // ans=max(ans,i-m[sum]);
            }
            else
            {
                m[sum] = i;
            }
        }
    }
    cout << ans;
}