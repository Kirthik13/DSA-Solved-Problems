	#include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main(){
    ll int n,k;
    cin>>n>>k;
    vector<ll int>a(n);
    for(ll int i=1;i<=n;i++){
        cin>>a[i];
 
    }
    ll int total=0;
    for(ll int i=1;i<=n;i++){
       ll int right=a[i]+k;
      ll  int index=lower_bound(a.begin(),a.end(),right)-a.begin();
        if(index==n || a[index]!=right){
            index--;
        }
        // cout<<"index : "<<index<<" "<<"i : "<<i<<endl;
        ll int between=index-i;
        // cout<<"between : "<<between<<endl;
        total+=(between*(between+1))/2;
        cout<<"total : "<<total<<endl;
    }
    cout<<total;
    return 0;
    }