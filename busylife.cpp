#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> v = {{7, 9}, {0, 10}, {4, 5}, {8, 9}, {4, 10}, {5, 7}};

    sort(v.begin(), v.end(), [](auto &left, auto &right)
         { return left.second < right.second; });
         int cnt=1;
// for(auto i:v){
//     cout<<i.first<<" "<<i.second<<endl;
// }
    for (int i = 1; i < v.size(); i++)
    {
        if( v[i-1].second==v[i].second or  v[i-1].first==v[i].first ){
            continue;
        }
        if(v[i-1].first>v[i].second){
            continue;
        }
        if(v[i-1].first>v[i].first){

            continue;
        }
        // cout<<v[i].first<<" "<<v[i].second<<endl;
        cnt++;
    }
    cout<<cnt<<endl;
}