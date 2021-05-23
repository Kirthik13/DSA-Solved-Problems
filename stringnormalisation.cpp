#include<bits/stdc++.h>
using namespace std;
int main(){
    string copy="aBC";
    // cout<<copy.size()<<endl;

// string tem;
// stringstream ss(copy);
// vector<string>v;
// while(getline(ss,tem,' ')){
//    v.push_back(tem);
//     // tem.front()=toupper(tem.front());
//     // cout<<tem<<" ";
// }
// if(v.size()==1){
//     transform(copy.begin(),copy.end(),copy.begin(),::toupper);
//     return copy;
// }
// else{
copy[0]=toupper(copy[0]);
for(int i=1;i<copy.size();i++){
    if(copy[i]==' '){
        continue;
    }
    if(copy[i-1]==' '){
    copy[i]=toupper(copy[i]);
    }
    else{
        copy[i]=tolower(copy[i]);
    }
// }}
}
cout<<copy;
}