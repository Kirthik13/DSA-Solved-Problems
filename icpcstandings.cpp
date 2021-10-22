#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<char,int>>teams={{'a',1},{'b',2},{'c',2},{'d',1},{'e',5},{'f',7},{'g',7}};
    sort(teams.begin(),teams.end(),[](auto a,auto b){return a.second<b.second;});
    // for(auto i:teams){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    int cnt{};
    for(int i=1;i<=teams.size();i++){
        cnt+=abs(i-teams[i-1].second);
    }
    cout<<cnt;
}
