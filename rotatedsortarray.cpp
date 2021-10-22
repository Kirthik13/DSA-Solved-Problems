#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int mycode(vector<int> v, int target)
{
    if (v.size() == 1)
    {
        return (target == v[0]) ? 0 : -1;
    }
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (v[mid] == target)
        {
            return mid;
        }
        if (v[s] <= v[mid])
        {
            if (v[s] <= target and target <= v[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (v[e] >= target and target >= v[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return 1;
}

    

int main()
{
   
    vector<int>v={4,5,6,7,0,1,2};
    int target{};
    cout<<mycode(v,target);
}