#include<bits/stdc++.h>
using namespace std;
int main(){
    int min;
    cin>>min;
    // string a;
    // string b;
  int h=min/60;
  int m=min%60;
  string a=to_string(h);
  string b=to_string(m);

    if(b.size()==1){
        b.insert(0,"0");

    }
a.push_back(':');
    // string c=b+a;
    // cout<<c;
    cout<<a+b;
   
}