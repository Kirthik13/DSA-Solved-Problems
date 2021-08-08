#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={0,1,0,2,1,0,1,3,2,1,2,1};
    int l=0;
    int r=a.size()-1;
    int lmax{},rmax{};
    int res{};
    while(l<=r){
        if(a[l]<=a[r]){
            if(a[l]>lmax){
                lmax=a[l];
            }
            else{
                res=res+(lmax-a[l]);
            }
            l++;
        }
        else{
            if(!(a[r]<rmax)){
                rmax=a[r];
            }
            else{
                res=res+(rmax-a[r]);
            }
            r--;
        }
    }
    cout<<res;
}