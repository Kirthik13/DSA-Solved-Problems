#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int ans{};
    int k = 1;
    int prev = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != prev)
        {
            prev = v[i];
            v[k++] = v[i];
        }
    }
    // for(auto i:v){
    //     cout<<i<<" ";
    // }
    cout << k;
}