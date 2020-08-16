#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(2<=n&&n<=30){
        pair<int,int>a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].first>>a[i].second;
        }
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            if(a[i].first==a[j].second){
                    c++;
            }
        }
        }
        cout<<c;
    }
    else{
        exit(1);
    }
}
