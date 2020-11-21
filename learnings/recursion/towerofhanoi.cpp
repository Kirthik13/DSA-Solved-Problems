#include<bits/stdc++.h>
using namespace std;
void solve(int n,int s,int d,int h,int &c){
    c++;
    if(n==1){
        cout<<"moving "<<n<<" frm "<<s<<" to "<<d<<endl;
        return;
    }
        // cout<<"moving "<<n<<" frm "<<s<<" to "<<d<<endl;

    solve(n-1,s,h,d,c);
        cout<<"moving "<<n<<" frm "<<s<<" to "<<d<<endl;
    solve(n-1,h,d,s,c);
}
int main(){
    int n=2;
  int s=1,h=2,d=3,c{};
    solve(n,s,d,h,c);
    cout<<endl<<c<<endl;
}