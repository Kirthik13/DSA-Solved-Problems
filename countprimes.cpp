#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool arr[n];
    if(n<2){
        return 0;
    }
    memset(arr,1,sizeof(arr));
    arr[1]=0;
    
 
    for(int i=2;i*i<n;i++){
        if(arr[i]){
        for(int j=i*i;j<n;j+=i){
        
        arr[j]=0;
        }
    }
    }
    int cnt{};
    for(int i=2;i<n;i++){
        if(arr[i]){
           cnt++;
        }
    }
    cout<<cnt<<'\n';
}