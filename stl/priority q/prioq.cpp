#include<bits/stdc++.h>
using namespace std;
#define cc cout<<endl
int main(){
priority_queue<int>pq;
pq.push(12);
pq.push(24);
pq.push(3);
pq.push(90);

priority_queue<int>qp(pq);
while(!qp.empty()){
    cout<<qp.top()<<" ";
    qp.pop();
}
cc;
qp.push(90);
while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
}
cc;
priority_queue<int,vector<int>,greater<>>pp;
pp.push(50);
pp.push(35);
pp.push(11);

pp.emplace(123);

cc;
while(!pp.empty()){
    cout<<pp.top()<<" ";
    pp.pop();
}

}