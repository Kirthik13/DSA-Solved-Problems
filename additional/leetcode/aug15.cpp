#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>> intervals{{1,2},{2,3},{3,4},{1,3}};

    int c = 0;
    pair<int,int>p[intervals.size()];
int j=0;
    for (auto i :intervals)
    {
        p[j]=make_pair(i[0],i[1]);
       j++;
    }
  int k=0;
    for(auto i:p){
        cout<<p[k].first<<" "<<p[k].second<<endl;
        k++;
    }

    // for (int i = 0; i < v2.size(); i += 2)
    // {

    //     if (v2[i]> v2[i + 1])
    //     {
    //         c++;
    //     }
    // }
    // cout << c;
}
