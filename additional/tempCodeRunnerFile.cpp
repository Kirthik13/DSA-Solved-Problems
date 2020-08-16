#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<" "<<x<<endl;
template<typename... T>
void read(T&... args){
    ((cin>>args), ...);
}
template<typename... T>
void write(T&... args){
    ((cout<<args<<endl), ...);
}
#define fo(i,n) for(int i=0;i<5;i++)
int main(){

int x,y,z;
read(x,y,z);
deb(x);
deb(y);
deb(z);

write(x,y,z,"sdfhusdhf",6.32);

vector<int>v(5,10);
fo(i,n){
    cout<<v[i];
}
}