#include<bits/stdc++.h>
using namespace std;
int main(){

 int t;
cin>>t;
if(1<=t&&t<=1000){
while(t--){

 int n,a,b,c,d;

cin>>n>>a>>b>>c>>d;
cout<<((n*(a-b)<=c+d && n*(a+b)>=c-d)?"Yes\n":"No\n");

}



}
}
