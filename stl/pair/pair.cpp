#include<iostream>
#include<utility>
using namespace std;

int main(){

//pair<pair<int,int>,pair<int,int>>a[]={{{1,56},{2,4}},{{32,42},{56,78}}};
//cout<<a[1].second.second;
pair<int,int>p,q;
p={4,11};
q={4,10};
//cout<<(p<=q);
p.swap(q);
cout<<p.first<<" "<<p.second;
cout<<q.first<<" "<<q.second;

}