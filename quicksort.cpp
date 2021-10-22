#include <bits/stdc++.h>
using namespace std;
int parti(vector<int> &v, int s, int e)
{
    int pivot = v[e];
    int i = s - 1;
    for (int j = s; j <= e - 1; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[e], v[i + 1]);
    // cout<<"i +1 : " <<i+1<<endl;
    return i + 1;
}
void quisort(vector<int> &v, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = parti(v, s, e);
    quisort(v, s, p - 1);
    quisort(v, p + 1, e);
}
int main()

{
    vector<int> v = {5, 2, 1, 7, 8, 12, 10};
    int s = 0;
    int e = v.size() - 1;
    quisort(v, s, e);
    for (auto i : v)
    {
        cout << i << " ";
    }
}