#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main(){
    string s;
    cin>>s;

    unordered_map<char,int>m;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
    int res{};
    int i=0;
    while(i<s.size()){
      
        char let=s[i];
        char nextlet=' ';
        if(i+1<s.size()){
         nextlet=s[i+1];
        }
        if(m[nextlet]>m[let]){
            
           res+=m[nextlet]-m[let]; 
           i+=2;
        }
        else{
            res+=m[let];
            i++;
        }


        
    }
    cout<<res;
}