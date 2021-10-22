#include<bits/stdc++.h>
using namespace std;
string keys[]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void keyp(string s,string res,int i){
if(s.size()==i){
    cout<<res<<endl;
    return ;
}
int curr_digit=s[i]-48;
if(curr_digit==0 or curr_digit==1){
    keyp(s,res,i+1);
}
for(int j=0;j<keys[curr_digit].size();j++){
    keyp(s,res+keys[curr_digit][j],i+1);

}
}
int main(){
    string s;
    cin>>s;
    string res="";
    keyp(s,res,0);
}