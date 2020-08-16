#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n,h;
    cin>>n>>h;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int w=0;

for(auto i=v.begin();i!=v.end();i++){
    if(*i>h){
        w=w+2;
    }
    else if(*i<=h){
        w++;
    }
}
cout<<w;
}