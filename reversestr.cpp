#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main(){
    string s;
    getline(cin,s);
//     stringstream T(s);
//     vector<string>v;
//     string dum;
//     int ch=0;
//     for(auto i:s){
//         if(i!=' '){
         
//             dum.push_back(i);
//             ch=1;
//         }
//         else{
            
//             if(ch){
//         v.push_back(dum);
//         dum.clear();
//         ch=0;
//             }
//         }
//     }
//     if(!dum.empty()){
//         v.push_back(dum);
//     }
//    string res;
//  for(auto i:v){
//      cout<<i<<endl;
//  }

//   for(int i=v.size()-1;i>=0;i--){
//     // cout<<i<<endl;  
//         res.append(v[i]);
//     //     if(res.back()!=' '){

//         res.push_back(' ');
//     //     }
//   }

    
//     res.pop_back();
//     cout<<res;
    




string tem,res;

    int i=0;
    int j;
while(1){
    while(i<s.size() and s[i]==' '){
        i++;
    }
    if(i>=s.size()) break;
    j=i;

    while(j<s.size() and s[j]!=' '){
        j++;
    }
    tem=s.substr(i,j-i);
    res=tem+(res.size()?" ":"")+res;
    i=j;
}
cout<<res;

}
