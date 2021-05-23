#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    unordered_set<char> v;
    for (auto i = 0; i < str.size(); i++)
    {
        v.insert(str[i]);
    }

    int cnt{};
    int start{}, start_idx{}, curr, res = INT_MAX;
    unordered_map<char, int> m;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        m[ch]++;
        // cout<<"m[ch]  : "<<m[ch]<<endl;
        if (v.find(ch) != v.end() and m[ch] == 1)
        {
            cnt++;
            // cout<<" ch : "<<ch<<" cnt : "<<cnt<<endl;
        }
        if (cnt == v.size())
        {
            while (m[str[start]] > 1 or v.count(str[start]) == 0)
            {
                m[str[start]]--;
                start++;
            }

            curr = i - start + 1;
            // cout<<"curr : "<<curr<<endl;
            if (res > curr)
            {
                res = curr;
                start_idx = start;
            }
        }
    }
    cout << str.substr(start_idx, res);
}