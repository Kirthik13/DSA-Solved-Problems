#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
         if(s.size()==0 or s.size()==1){
            cout<< s.size();
        }
        set<char>st;
        for(auto i:s){
            st.insert(i);
        }
        
        int ans=INT_MIN;
        int count{};
        int i{},j{},i1{},j1{};
        while(i<s.size() and j<s.size()){
            while(st.find(s[j])==st.end() and j<s.size()){
       
       
          st.insert(s[j]);
          j++;
          count++;
          
      }

      if(count>ans){
         
          i1=i;
          j1=j;
          ans=count;
      }
     count=j-i-1;
   
    st.erase(s[i]);

 
      i++;
        }
        cout<< j1-i1;
}