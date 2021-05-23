#include<bits/stdc++.h>
using namespace std;
string gettokens(string s,int tok){
    char *str=strtok((char *)s.c_str()," ");
    while(tok>1){
        str=strtok(NULL," ");
        tok--;
    }
    return string(str);
}
// bool numm(pair<string,string> a,pair<string,string> b){
//     string s1=a.second;
//     string s2=b.second;
//    return stoi(s1)<stoi(s2);
// }
int main(){
    int t;
    cin>>t;
cin.get();
    string temp;
    vector<string>v;
    while(t--){
        getline(cin,temp);
        v.push_back(temp);
    }
    int key;string reversal, type;
    cin>>key>>reversal>>type;
    vector<pair<string,string>>res;

    for(int i=0;i<v.size();i++){
        res.push_back({v[i],gettokens(v[i],key)});

    }
    if(type=="numeric"){
        sort(res.begin(),res.end(),[](auto  a,auto b){
 
   return stoi(a.second)<stoi(b.second);});

       
        
    }
    else {
        sort(res.begin(),res.end(),[](auto  a,auto b){
 
   return a.second<b.second;
   }
   );

       

    }

    if(reversal=="true"){
        reverse(res.begin(),res.end());
    }
for(auto i:res){
    cout<<i.first<<endl;
}
    
}