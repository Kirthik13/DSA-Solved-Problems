#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="hello world epdii irukenga ?";
    int n=s.size();
    int last=s.size();
    int space{};
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            space++;
        }

    }
    space*=2;
    while(space--){
        s.push_back(' ');

    }
int first=s.size()-1;
    while(last--){
        if(s[last]!=' '){
            s[first--]=s[last];
        }
        else{
            s[first--]='0';
            s[first--]='2';
            s[first--]='%';

        }
    }
    cout<<s<<endl;
}