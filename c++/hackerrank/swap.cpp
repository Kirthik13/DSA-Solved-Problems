#include<iostream>
using namespace std;

int main(){

int n=4;
int a[n];
for(int i=0;i<=n;i++){
    cin>>a[i];
}
for(int i=0;i<=n;i++){
    cout<<" "<<a[i];
}
cout<<endl;

for(int i=0;i<=n;i++){
    if(i==0){
a[n+1]=a[i];
a[i]=a[i+1];
}
else if(i==n){
    a[i]=a[n+1];
   // n--;
}
else{
a[i]=a[i+1];}
}
for(int i=0;i<=n;i++){
    cout<<" "<<a[i];
}
}