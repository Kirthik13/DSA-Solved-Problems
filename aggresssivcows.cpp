#include <bits/stdc++.h>
using namespace std;
bool cando(int val,int cows,vector<int>v){
    int prev=v.front();
    int cnt=1;
    for(int i=1;i<v.size();i++){
        if(v[i]-prev>=val){
            cnt++;
            prev=v[i];
        }
    }
    if(cnt>=cows){
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
    int cows;
    cin >> n>>cows;
    vector<int> v(n);
    for(auto &i:v){
        cin>>i;
    }
    sort(begin(v),end(v));
    int s=v.front();
    int e=v.back()-s;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(cando(mid,cows,v)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans<<endl;
    }    
}