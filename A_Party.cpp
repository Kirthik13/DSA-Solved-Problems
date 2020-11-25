#include <bits/stdc++.h>
 
using namespace std;
 
 
int v[10000];
int dfs(int ele){
    if(ele==-1){
        return 1;
    }
    return dfs(v[ele])+1;
}
int main(){
    int n,m=0;
    cin>>n;
    
    for(int i=1;i<=n;i++){
       cin>>v[i];
    }
    for(int i=1;i<=n;i++){
      m=max(m,dfs(v[i]));
    }
    cout<<m<<endl;
}
