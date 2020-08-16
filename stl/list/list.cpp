#include<bits/stdc++.h>

#define cc cout<<endl
using namespace std;
bool isodd(int i){
    if(i&1){
return false;
}
else{
    return true;
}
}
int main(){
list<int>l;
l.push_front(13);
l.push_back(12);
l.push_back(14);
l.push_back(15);
l.push_back(16);
for(auto i:l){
cout<<" "<<i;
}
cc;/*
l.pop_front();
for(auto i:l){
cout<<i<<" ";}
*/

list<int>l1;
l1.push_back(1);
l1.push_back(2);
l1.push_back(3);

l.merge(l1);
l.sort();
for(auto i:l){
cout<<i<<" ";

cc;

}
l.reverse();
cc;
for(auto i:l){
cout<<i<<" ";

cc;

}
cc;/*
cout<<"after removal";
int i;
list<int>l2;
l2.push_back(1);
l2.push_back(2);
l2.push_back(3);
l2.push_back(4);
l2.push_back(5);
l2.push_back(6);
list<int>::iterator pend;
pend=remove_if(l2.begin(),l2.end(),isodd);
//remove_if(l.begin(),l.end(),isevem);
cc;
for(auto i=l2.begin();i!=pend;i++){
    cout<<*i<<"  ";
}*/
list<int>l3(l);
l3.sort();

list<int>::iterator pend;
pend=remove_if(l3.begin(),l3.end(),isodd);

for(auto i=l3.begin();i!=pend;i++){
    cout<<*i<<"  ";
}
cout<<"size: "<<l3.size();
cc;

l3.erase(pend,l3.end());cc;
cout<<"size: "<<l3.size();cc;
l3.push_back(13);
l3.sort();
l3.unique();
cc;
for(auto i:l3){
cout<<i<<" ";

cc;}
l3.push_back(13);
l3.push_back(14);
l3.push_back(15);
l3.push_back(14);
l3.push_back(13);
l3.sort();
l3.unique();
cc;
for(auto i:l3){
cout<<i<<" ";

cc;

}
cc;
list<int>::iterator itt;
itt=l3.begin();
advance(itt,2);
cout<<"after advance: ";
for(auto i=itt;i!=l3.end();i++){
cout<<*i<<" ";
}
cc;
l3.insert(l3.begin(),4,1);
for(auto i:l3){
    cout<<i<<" ";
}
}



