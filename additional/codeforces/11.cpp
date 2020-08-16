#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
if(1<=n&&n<=100000){
    
    string s;
    cin>>s;
    char a[n];
    strcpy(a,s.c_str());
    unordered_multiset<char>v;
    for(int i=0;i<n;i++){
        v.emplace(a[i]);
    }
   
   int A=v.count('A');
   int D=v.count('D');
   if(A>D){
       cout<<"Anton";
   }
   else if(A<D){
       cout<<"Danik";
   }
   else if(A==D){
       cout<<"Friendship";
   }

}
else{
    exit(1);
}
}