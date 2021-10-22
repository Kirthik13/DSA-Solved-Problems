#include<bits/stdc++.h>
using namespace std;
void par(int n,int op,int cl,string res,int i){
    if(i==2*n){
        cout<<res<<endl;
        return ;
    }
    if(op<n){
        par(n,op+1,cl,res+'(',i+1);
    }
    if(cl<op){
        par(n,op,cl+1,res+')',i+1);
    }
}
int main(){
    int n;
    cin>>n;
    string res="";
    par(n,0,0,res,0);
}