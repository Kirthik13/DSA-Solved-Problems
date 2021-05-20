#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,9,3,0,18,5,2,4,10,7,12,6};
    // sort(v.begin(),v.end());
    int m{};
    // for(int i=1;i<v.size();i++){
    //     if(v[i-1]+1==v[i]){
    //         sofar++;
    //     }
    //     else{
    //         m=max(m,sofar);
    //         sofar=1;
    //     }
    // }
    unordered_set<int>nos;
    for(auto i:v){
        nos.insert(i);
    }
    // for(auto i:nos){
    //     cout<<i<<" ";
    // }
    for(auto i:v){
        int parent=i-1;
        if(nos.find(parent)==nos.end() ){
            // cout<<parent<<endl;
            int next=i+1;
            // cout<<i<<endl;
    int sofar=1;
    // sofar++;
            while(nos.find(next)!=nos.end()){
                sofar++;
                next++;
             }
            m=max(sofar,m);
        }
    }

    cout<<m<<endl;
}
