#include<iostream>
#include<string.h>
#include<stack>
#define N 100
#define M 100
using namespace std;
char a[N];
void reverse(int len1){
    stack<char>S;
    for(int i=0;i<len1;i++){
        S.push(a[i]);
    }
    for(int i=0;i<len1;i++){
           a[i]=S.top();
        S.pop();
     
    }
}
int main(){
    cout<<"enter a string: "<<endl;
    gets(a);
    int len1=strlen(a);
    reverse(len1);
    for(int i=0;i<len1;i++){
    cout<<" "<<a[i];}

}