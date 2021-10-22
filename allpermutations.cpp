#include<bits/stdc++.h>
using namespace std;
void permu(string s,int l,int r){
    if(l==r){
        cout<<s<<endl;
        // return ;
    }
    else{
    for(int i=l;i<=r;i++){
        swap(s[i],s[l]);
        permu(s,l+1,r);
        swap(s[i],s[l]);
    }
}}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    permu(s,0,n-1);
}