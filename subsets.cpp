#include<bits/stdc++.h>
using namespace std;
void subs(string s,string res){
    if(s.empty()){
        // v.emplace_back(res);
        cout<<res<<endl;
        return ;
    }
    subs(s.substr(1),res);
    char ch=s.front();
    res.push_back(ch);
    subs(s.substr(1),res);

}
int main()
{

    string s="abc";
    string res="";
    // vector<string>v;
    subs(s,res);
    // for(auto i:v){
        // cout<<i<<endl;
    // }
}