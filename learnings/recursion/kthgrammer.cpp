#include<bits/stdc++.h>
using namespace std;
int solve(int n,int k){
    if(n==1 and k==1){
        return 0;
    }
    
    int m=(pow(2,n-1))/2;
    if(m>=k){
        return solve(n-1,k);
    }
    else{
        return !(solve(n-1,k-m));

    }
    
}
int main(){

int n=3,k=3;
int res=solve(n,k);
cout<<res;
}