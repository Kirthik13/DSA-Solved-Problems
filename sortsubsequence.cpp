// #include<bits/stdc++.h>
// using namespace std;
// vector<string> gen(vector<string>&v,string a,int i,string &res){

//     if(i==a.size()){
//         // cout<<res<<endl;
//         v.push_back(res);
//         return v;
//     }
//     // cout<<"i : "<<i<<endl;
//     gen(v,a,i+1,res);
//     // cout<<"Asd";
//     res.push_back(a[i]);
//     gen(v,a,i+1,res);
//     res.pop_back();


// return v;
// }
// int main(){
// string a="abc";
// int i=0;
// string res="";
// vector<string>v;
// v=(gen(v,a,i,res));
// // set<string>s(v.begin(),v.end());
// sort(v.begin(),v.end(),[](string a,string b1){if(a.size()==b1.size()){
//     return a<b1;

// } return a.size()<b1.size();});


// for(auto i:v){
//     cout<<i<<endl;
// }
// }



#include<bits/stdc++.h>
using namespace std;
void gen(vector<string>&v,string s,string a){
    if(s.size()==0){
        v.push_back(a);
        return;
    }
    char ch=s[0];
    string restr=s.substr(1);
    cout<<"a1 : "<<a<<endl;
    gen(v,restr,a+ch);
    cout<<"a2 : "<<a<<endl;
    gen(v,restr,a);
}



int main(){
string s="abc";
string a="";

vector<string>v;
gen(v,s,a);
// sort(v.begin(),v.end(),[](auto a,auto b){return a.size()<b.size();});
for(auto i:v){
    cout<<i<<",";
}
}