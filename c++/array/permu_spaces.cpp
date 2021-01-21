
#include<bits/stdc++.h>
using namespace std;
void gen(string &s,int start,int len,set<string>&st){
    if(start==len-1){
        st.insert(s);
        return;
    }
    gen(s,start+1,len,st);
    s.insert(start+1," ");
    len=s.size();
    gen(s,start+2,len,st);
    s.erase(start+1,1);
    return;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set<string>st;
        gen(s,0,s.size(),st);
        for(auto i:st){
            cout<<"("<<i<<")"<<" ";
        }
    }
}

