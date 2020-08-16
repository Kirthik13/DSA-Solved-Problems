#include<bits/stdc++.h>
#include<string>
#include<typeinfo>
using namespace std;
int main(){
    string a="98.46";
    float x;
   x=stof(a);
   cout<<x;
cout<<'\n';
cout<<*(typeid(x).name());
}