#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main()
{
    int n = 6;
    vector<int> v1 = {900, 940, 950, 1100, 1500, 1800};
    vector<int> v2 = {910, 1200, 1120, 1130, 1900, 2000};
    int res{};
    sort(all(v1));
    sort(all(v2));
    int i = 0;
    int j = 0;
    int pl{};
    while (i < n and j < n)
    {
        if (v1[i] <= v2[j])
        {
            pl++;
            res = max(res, pl);
            i++;
        }
        else
        {
            pl--;
            // i++;
            j++;
        }
    }
    cout << res;
}