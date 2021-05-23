#include<bits/stdc++.h>
using namespace std;
char *mystrtoken(char *str,char delim){
    static char *st=NULL;
    if(str!=NULL){
    st=str;
    // cout<<*str<<endl;
    }
    if(st==NULL){
        return NULL;

    }
    char * result=new char[strlen(st)+1];
    // cout<<strlen(st)<<endl;
    
    int i=0;
    for(;st[i]!='\0';i++){
        if(st[i]!=delim){
            result[i]=st[i];
        }
        else{
            result[i]='\0';
            st=st+i+1;
            return result;
        }
    }
    result[i]='\0';
    st=NULL;
    return result;


}
int main(){
    char str[100];
    cin.getline(str,100);

    char * token=mystrtoken(str,' ');

    while(token!=NULL){
        cout<<token<<",";
        token=mystrtoken(NULL,' ');
    }
}