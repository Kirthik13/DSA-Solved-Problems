#include <bits/stdc++.h>
using namespace std;
bool place(vector<string> v, int row, int col, int n)
{
    for (int c1 = col; c1 >= 0; c1--)
    {
        if (v[row][c1] == 'Q')
        {
            return false;
        }
    }
    int row1 = row;
    int col1 = col;
    while (row1 >= 0 and col1 >= 0)
    {
        if (v[row1][col1] == 'Q')
        {
            return false;
        }
        row1--;
        col1--;
    }
    row1 = row;
    col1 = col;
    while (row1 < n and col1 >= 0)
    {
        if (v[row1][col1] == 'Q')
        {
            return false;
        }
        row1++;
        col1--;
    }
    return true;
}
void sub(vector<vector<string>> &res, vector<string> &v, int col, int n)
{
    if (col == n)
    {
        res.push_back(v);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (place(v, row, col, n))
        {
            v[row][col] = 'Q';
            sub(res, v, col + 1, n);
            v[row][col] = '.';
        }
    }
}
int main()
{
    int n = 4;
    vector<string> v(n);
    string str(n, '.');
    for (int i = 0; i < n; i++)
    {
        v[i] = str;
    }
    vector<vector<string>> res;
    sub(res, v, 0, n);
}