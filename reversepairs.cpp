#include <bits/stdc++.h>
using namespace std;
int merge(vector<int>&v, int s, int e,int n)
{
    vector<int> tem;;
    int k = 0;
    int i = s;
    int mid = (s + e) / 2;
    int cnt{};
    int j = mid + 1;
    for (int i = s; i <= mid; i++)
    {
        while (j <= e and v[i] > (v[j] * 2))
        {
            j++;
        }
        cnt = cnt + (j - (mid + 1));
    }
    j = mid + 1;
    while (i <= mid and j <= e)
    {
        if (v[i] <= v[j])
        {
            tem.push_back(v[i]);
            i++;
        }
        else
        {

            tem.push_back(v[j]);
            // tem[k++] = v[j];
            j++;
        }
    }
    while (i <= mid)
    {
            tem.push_back(v[i]);
        // tem[k++] = v[i];
        i++;
    }
    while (j <= e)
    {
            tem.push_back(v[j]);
        // tem[k++] = v[j];
        j++;
    }

    for (int i = s; i <= e; i++)
    {
        v[i] = tem[k++];
    }
    return cnt;
}
int mergesort(vector<int>&v, int s, int e, int n)
{

    if (s < e)
    {

        int mid = (s + e) / 2;
        int x = mergesort(v, s, mid, n);
        int y = mergesort(v, mid + 1, e, n);
        int z = merge(v, s, e, n);

        return x + y + z;
    }
    return 0;
}
int main()
{
    vector<int>v = {1,3,2,3,1};

    int n = 5;
    cout << mergesort(v, 0, n - 1, n);
}