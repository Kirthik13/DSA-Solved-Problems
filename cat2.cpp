#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
vector<string>st;
 set<pair<string,int>>m;
    while(getline(ss,s,' ')){
        st.push_back(s);
        m.insert({})
        // s.clear();
    }
 
   for(auto i:st)
   {
      
   }
   for(auto i:m)
   {
      cout<<i.first<<" "<<i.second<<endl;
   }
    // string s1;
    // string s2;
    // cin>>s1;
    // cin>>s2;
    // int po{};
    // for(int i=0;i<s2.size();i++){
    //     if(s1[0]==s2[i]){
    //         po=i;
    //         break;
    //     }
    // }
    // int i=po;
    // int j{};
    // do{
    //     if(s2[i%s2.size()]!=s1[j]){
    //         cout<<"msi : "<<s2[i%s2.size()]<<endl;
    //         cout<<-1<<endl;
    //         break;
    //     }
    //     else{
    //         cout<<s1[j];
    //     }
    //     i++;
    //     j++;
    // }while(i%s2.size()!=po);
    
}