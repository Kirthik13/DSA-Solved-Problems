#include<bits/stdc++.h>
using namespace std;
int main(){

    int x;
    cin>>x;
    int p=3;
     
        float  s=0;
        float e=x;
        float ans;
        if(x==0){
            return 0;
        }
        while(s<=e){
        float mid=(s+e)/2;
            if(mid * mid == x){
                ans= mid;
                break;
            }
            else if( (mid*mid) <x){
                ans=mid;
                                s=mid+1;

            }
            else {
                e=mid-1;
            }
        }
float inc=0.1;
        for(int i=1;i<=p;i++){
            while(ans*ans<=x){
                ans+=inc;
            }
            ans-=inc;
            inc/=10.0;
        }
        cout<<ans;

}