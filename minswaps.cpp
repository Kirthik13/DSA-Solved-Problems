#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={5,4,3,2,1};

vector<bool>vis(v.size(),false);
    pair<int,int>nam[v.size()];
    for(int i=0;i<v.size();i++){
        nam[i].first=v[i];
        nam[i].second=i;
    }
    int m{};
    sort(nam,nam+v.size());
    for(int i=0;i<v.size();i++){
        if(vis[i]==1 or nam[i].second==i){
            continue;
        }
        int node=i;
        int cycle=0;
        while(!vis[node]){
            vis[node]=1;
            node=nam[node].second;
            cycle+=1;
        }
        m+=(cycle-1);
    }
    cout<<m<<endl;
}