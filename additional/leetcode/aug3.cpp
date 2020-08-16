#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<char>v;
    vector<char>v2;
    
    transform(s.begin(),s.end(),s.begin(),::toupper);

    for(int i=0;i<s.size();i++){
      
        int a;
        a=int(s[i]);
        if(a>47 && a<58){
        //     return false;
        //     return 0;
        // }
        
            v.push_back(s[i]);
        }
      else if(a>64 && a<91) {
            v.push_back(s[i]);
      }
        
    }
   
v2=v;
reverse(v.begin(),v.end());
for(auto i:v2){
    cout<<i;
}
cout<<endl;
for(auto i:v){
    cout<<i;
}
if(v==v2){
    cout<<"hi";
    return true;
}
else{
    cout<<"bye";
    return false;
}

}