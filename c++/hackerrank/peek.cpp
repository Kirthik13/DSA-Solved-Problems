#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    stringstream a;
    string s;
    cin>>s;
    a.str(s);
    int b;
    vector<int>vv;
    while(a>>b){
        vv.push_back(b);
if(a.peek()==',')
{
    a.ignore();
}

    }
    for(auto i=vv.begin();i!=vv.end();i++){
        cout<<*i<<" ";
    }
}