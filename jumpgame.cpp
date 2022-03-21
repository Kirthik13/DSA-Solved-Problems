#include <bits/stdc++.h>
using namespace std;
int n;
int fn(int idx, vector<int> &v, unordered_map<int, vector<int>> &m)
{
    queue<int> q;
    int ans{};
    q.push(0);
    while (!q.empty())
    {
        ans++;
        int sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            int j = q.front();
            q.pop();

            if (j - 1 >= 0 and m.find(v[j - 1]) != m.end())
            {
                q.push(j - 1);
            }
            if (j + 1 < n and m.find(v[j + 1]) != m.end())
            {
                if (j + 1 == n - 1)
                {
                    return ans;
                }
                q.push(j + 1);
            }
            if (m.find(v[j]) != m.end())
            {
                for (auto k : m[v[j]])
                {
                    if (k != j)
                    {
                        if (k == n - 1)
                        {
                            return ans;
                        }
                        q.push(k);
                    }
                }
            }
            m.erase(v[j]);
        }
    }
    return ans;
}
int main()
{
    vector<int> v = {0, 1, 1, 2, 0, 8, 9, 2};
    n = v.size();

    unordered_map<int, vector<int>> m;
    for (int i = 0; i < n; i++)
    {
        m[v[i]].push_back(i);
    }

    cout << fn(0, v, m);
}