#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
vector<int> dir1 = {0, 0, 1, -1};
vector<int> dir2 = {-1, 1, 0, 0};
queue<pair<int, int>> st;

// st.push({i, j});

int main()
{
    vector<vector<int>> v = {{2, 1, 1}, {1, 1, 1}, {0, 1, 2}};
    // vector<vector<int>> v = {{0, 2}};
    int res{};
    // vector<vector<int>> visit(v.size(), vector<int>(v[0].size(), -1));

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            if (v[i][j] == 2)
            {
                st.push({i, j});
            }
        }
    }
    int cnt{};
    // break;
    while (!st.empty())
    {
        int k = st.size();
        cnt++;
        while (k--)
        {
            int i = st.front().first;
            int j = st.front().second;

            st.pop();
            int ch = 0;
            for (int idx = 0; idx < 4; idx++)
            {
                if ((i + dir1[idx] >= 0 and i + dir1[idx] < v.size()) and (j + dir2[idx] >= 0 and j + dir2[idx] < v[0].size()))
                {
                    // cout<<"hi"<<endl;    
                    int i1 = v[i + dir1[idx]][j + dir2[idx]];
                    if (i1 == 1)
                    {
// continue;
                        
                        
                        // visit[i + dir1[idx]][j + dir2[idx]] = 1;

                        //             // bfs(i+dir1[idx],j+dir2[idx],st,res,v);
                    cout << i + dir1[idx] << " " << j + dir2[idx] << endl;
                        st.push({i + dir1[idx], j + dir2[idx]});
                        v[i + dir1[idx]][j + dir2[idx]] = 2;
                    }
                }
            }
            // if (ch)
            // {
            //     res++;
            //     ch = 0;
            // }
        }
        if(!st.empty()){
            res++;
        }
    }
    
    cout << res;
}