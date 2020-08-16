#include<bits/stdc++.h>
using namespace std;
int main(){
deque<char>v;
    /** Initialize your data structure here. */
  
    
    /** Adds a word into the data structure. */
         
  v.clear();
  string w;
cin>>w;
     for(int i=0;i<w.size();i++){
         v.push_back(w[i]);

  
   

     
     

    }
  string word;
    cin>>word;
  
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
  
        int count=0;
        int flag=0;
        if(word[0]==v[0]){
            count++;
            for(int i=1;i<v.size();i++){
            if(word[i]=='.'){
                flag=1;
                count++;
            }
            else if(v[i]==word[i]){
                count++;
            }
            }
        }
        else{
             for(int i=0;i<v.size();i++){
            if(word[i]=='.'){
                flag=1;
                count++;

            }
            else if(v[i]==word[i]){
                count++;
            }

        }
        }
      
     if(count==v.size()||count>0&&flag==1){
      cout<<"hi";
         return true;
     }  
     else{
         cout<<"bye";
        return false;
     }
        }    




 
// }
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      deque<char>v;
//      string s;
//      cin>>s;
//      for(int i=0;i<s.size();i++){
//          v.push_back(s[i]);
//      }
//      string t;
//      cin>>t;
//      int count=0;
//      int flag=0;
//      int c=0;
//      for(int i=0;i<s.size();i++){
//          for(int j=0;j<s.size();j++){
            
//              if(t[j]=='.'){
                   
     
//              flag=1;
//                  continue;
//              }
//              else{
//                  if(v[i]==t[j]){
                     
//                      count++;
//                  }
//              }
//          }
//      }
   

     
//      if(count>0&&flag==1){
//          cout<<"hi";
//          return true;
//      }
//      else if(count==v.size()){
//          cout<<"hi2";
//          return true;

//      }
//      else{
//          cout<<"bye";
//          return false;
//      }
//  }