#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
      stack<int>st;
        for(auto i:s){
            if(i=='('){
                st.push(-1);
            }
            else{
                        int res{};
                while(st.top()!=-1){
                    res+=st.top();
                    st.pop();
                }
                st.pop();
                res==0?st.push(1):st.push(2*res);
                
            }
            
        }
        int ans{};
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
}