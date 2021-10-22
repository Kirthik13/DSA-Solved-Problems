#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>v={ {5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
     int m=v.size();
        int n=v[0].size();
        
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
                if (i == j)
            {
                break;
            }
            swap(v[i][j], v[j][i]);
        }
    }

    for (int i = 0; i < m; i++)
    {
       
        for (int j = n - 1; j >= 0; j--)
        {
             
            if (j < n - j - 1 )
            {
                break;
            }
           
            swap(v[i][n - j - 1], v[i][j]);
        }
    }
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}