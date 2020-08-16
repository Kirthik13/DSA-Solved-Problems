#include<bits/stdc++.h>
#define cc cout<<endl
#define dd cout<<" "<<i;
using namespace std;

int main(){

stack<int>s;
s.push(12);
s.push(13);
s.push(14);
s.push(5);
s.push(1235);

while(!s.empty()){
    cout<<" "<<s.top();
    s.pop();
}
cc;
cout<<s.size();




}