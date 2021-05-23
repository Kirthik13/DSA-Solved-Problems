#include<bits/stdc++.h>
using namespace std;
int main(){
//using stringstream


    string s;
    getline(cin,s);
stringstream ss(s);
    string tok;
    while(getline(ss,tok,' ')){
        cout<<tok<<",";
    }

//using strtok

char str[100];
cin.getline(str,100);

char *token=strtok(str," ");
while(token!=NULL){
    cout<<token<<",";
    token=strtok(NULL," ");
}
}