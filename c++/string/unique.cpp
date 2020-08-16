#include<iostream>
using namespace std;
#define N 256

int main(){
bool chars[N];

string str;
cin>>str;
for(int i=0;i<str.length();i++){
if(chars[int(str[i])]==true){
    cout<<"duplicate "<<endl;
    exit(1);
}
chars[int(str[i])]=true;
}
cout<<"no dup";
}





