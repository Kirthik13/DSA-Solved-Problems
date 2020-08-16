#include<bits/stdc++.h>
#define cc cout<<endl
using namespace std;
int main(){
    
deque<int>dq;
dq.push_back(12);
dq.push_back(14);
dq.push_back(15);
dq.push_back(16);
dq.push_back(16);

for(auto i:dq){
    cout<<i<<" ";
}

cc;


cc;
dq.resize(5);
for(auto i:dq){
    cout<<i<<" ";
}
cc;
dq.shrink_to_fit();
cc;
for(auto i:dq){
    cout<<i<<" ";
}
cc;
cout<<dq[2];

}