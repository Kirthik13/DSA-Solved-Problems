#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
bool ifclose(char c){
    if(c==']' or c==')'  or c=='}'){
        return 1;
    }
    return 0;
}
bool ifopen(char c,char m){
    if(c==']' ){
        if(m=='['){
        return 1;
        }
        return 0;
    }
    else if( c=='}' ){
  if(m=='{'){
        return 1;
        }
        return 0;
    }
    else{
         if(m=='(' and c==')'){
        return 1;
        }
        return 0;
    }
    return 0;

}

int main(){
    string s;
    // cin>>s;
    getline(cin,s);
    auto d=count(all(s),' ');
  if(d>0){
    s.erase(remove(all(s),' '));

    s.resize(s.size()-d+1);
  }

//     int f=1;
    stack<char>st;
    st.push(s[0]);
    if(s.size()==1){
        exit(1);
    }
    for(int i=1;i<s.size();i++){
        if(ifclose(s[i])){
            if(!st.empty()){
            if(!ifopen(s[i],st.top())){
                exit(1);
            }
            st.pop();
            }
            else{
                exit(1);
            }
        }
        else{
        st.push(s[i]);
        }
}

if(st.empty()){
    cout<<"ASD";
}
}