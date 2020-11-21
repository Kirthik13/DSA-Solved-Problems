#include<bits/stdc++.h>
using namespace std;
void del(stack<int>& s,float k){
    if(s.size()==ceil(k/2)){
        s.pop();
        return;
    }
    int m=s.top();
    s.pop();
    del(s,k);
    s.push(m);
}
int main(){
    stack<int>s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    del(s,s.size());
   while(s.size()!=0){
       cout<<s.top()<<'\n';
       s.pop();

   }
}