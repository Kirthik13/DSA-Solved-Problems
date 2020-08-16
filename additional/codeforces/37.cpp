#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int res1=a+b;
    string a1=to_string(a);
    string b1=to_string(b);
    string c1=to_string(res1);

vector<char>a11;
vector<char>b11;
vector<char>c11;
for(int i=0;i<c1.size();i++){
    if(c1[i]!='0'){
    c11.push_back(c1[i]);
    }
}
for(int i=0;i<a1.size();i++){
    if(a1[i]!='0'){
    a11.push_back(a1[i]);
    }
}
for(int i=0;i<b1.size();i++){
    if(b1[i]!='0'){
    b11.push_back(b1[i]);
    }
}
string r1(a11.begin(),a11.end());
string r2(b11.begin(),b11.end());
string r3(c11.begin(),c11.end());


int t1=stoi(r1);
int t2=stoi(r2);
res1=stoi(r3);
int res=t1+t2;


    if(res1==res){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
}
