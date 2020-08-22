#include <bits/stdc++.h>
using namespace std;
int a,i,j;
char ch[1000001];
int main(){
cin>>a;
for(i=0;i<a;i++){
 cin>>ch[i];
}
for(i=0;i<a;i++) if(ch[i]=='n') cout<<"1 ";
for(i=0;i<a;i++) if(ch[i]=='z') cout<<"0 ";
return 0;}