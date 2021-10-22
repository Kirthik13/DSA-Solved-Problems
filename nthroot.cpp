#include <bits/stdc++.h>
using namespace std;
// #define double d
double mul(double mid,double n){
    double ans=1.0;
    // for(int i=1;i<=n;i++){
    //     ans=ans*mid;
    // }
    // return ans;
    while(n>0){
        if(int(n)%2==1){
            ans=ans*mid;
            n--;
        }
        else{
            mid*=mid;
            n=n/2;
        }
    }
    return ans;
}
void getNthRoot(int n,int m){
    double l=1;
    double h=m;
    double esp=1e-6;
    while((h-l )>esp){
        double mid=(l+h)/2.0;
        if(mul(mid,n)<m){
            l=mid;
        }
        else{
            h=mid;
        }
    }
    cout<<l<<" "<<h<<endl;
}
int main() {
	int n, m;
	cin >> n >> m; 
	getNthRoot(n, m); 
	return 0;
}