#include<bits/stdc++.h>
using namespace std;


int main(){
    set<char>l;
char a[100];
string s;
cin>>s;
int p=s.size();
    strcpy(a,s.c_str());
for(int i=0;i<p;i++){

 l.emplace(a[i]);
}


int si=l.size();
if(si & 1){
    cout<<"IGNORE HIM!";
}
else{
    cout<<"CHAT WITH HER!";
}

}