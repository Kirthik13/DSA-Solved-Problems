// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v={1,2,3,1,3,4,4,5};
    int xorb=0;
    int xor1=0;
    int xor2=0;

    for(auto i:v){
        xorb=xorb^i;
    }
    int cnt{};
    while(xorb){
        if(xorb&1){
            break;
        }
        cnt++;
        xorb=xorb>>1;
    }
    for(auto i:v){
        if(i&(1<<cnt)){
            xor1^=i;
        }
        else{
            xor2^=i;

        }
    }
    cout<<xor1<<" "<<xor2<<endl;
    return 0;
}