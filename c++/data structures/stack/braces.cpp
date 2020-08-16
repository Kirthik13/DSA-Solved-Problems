#include<iostream>
#include<stack>
#define N 100
using namespace std;
 stack<char>S;
bool arepair(char opening,char closing){
    if(opening=='('&&closing==')'){
        return true;
    }
     else if(opening=='{'&& closing=='}'){
        return true;
    }
    else if(opening=='['&& closing==']'){
        return true;
    }
}
 bool isbalan(string a){
    
 for(int i=0;i<a.length();i++){
        
        if(a[i]=='{'||a[i]=='('||a[i]=='['){
            S.push(a[i]);
        }
        else if(a[i]=='}'||a[i]==')'||a[i]==']'){
            if(S.empty()|| !arepair(S.top(),a[i]))
            {
                return false;
            }
            else{
                S.pop();
            }
        }
        
    }
    return S.empty() ? true:false;
    }
int main(){

    
string a;
cin>>a;
if(isbalan(a)){
cout<<"balanced";
}
else{
    cout<<"not balanced";
}
   
}