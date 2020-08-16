#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
        int P,H;
        cin>>H>>P;
        while(P>=1){
            if(H!=0){
            H=H-P;
            P=P/2;
            }
            else if(H==0){
                break;
            }
        }
        if(H<1){
            cout<<'1'<<'\n';
        }
        else{
            cout<<'0'<<'\n';
        }
    }
}