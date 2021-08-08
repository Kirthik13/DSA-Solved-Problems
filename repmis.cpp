#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1, 2, 3,4,5,6,8,8};
    int n=v.size();
// int s1=(n*(n+1))/2;
// int s2=(n*(n+1)*((2*n)+1))/6;
// for(auto &i:v){
//     s1-=i;
//     s2-=i*i;
// }

//     int k=s2/s1;
//     int x=(k+s1)/2;
//     int y=x-s1;
//     cout<<x<<" "<<y;

int xor1=0;
int xor2=0;
for(int i=0;i<n;i++){
    xor1^=v[i];
    xor2^=(i+1);
}
xor1^=xor2;
int x{},y{};


int sb=(xor1)& ~(xor1-1);
for(int i=0;i<n;i++){
    if(v[i]&sb){
        x^=v[i];
    }
    else{
        y^=v[i];

    }
}
for(int i=1;i<=n;i++){
    if(i&sb){
        x^=i;
    }
    else{
        y^=i;

    }
}
cout<<x<<" "<<y<<endl;



}