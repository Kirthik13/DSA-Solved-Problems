#include<bits/stdc++.h>
using namespace std;
#define nx '\n'





void rev(int s,int e,char *str){
   if(s>=e){
       return;
   }
    char te=str[s];
    str[s]=str[e];
    str[e]=te;
    rev(s+1,e-1,str);
    }

int main() {
   
    int t ;
    cin >> t;
    while(t--) {
        char str[1000];
        
    cin>>ws;
    gets(str);
    int s=0;
    int e=strlen(str)-1;
    rev(s,e,str);

    for(int i=0;i!=strlen(str);i++){
    cout<<str[i];
}
cout<<nx;

    }

    return 0;
}


