#include<bits/stdc++.h>
using namespace std;

int main(){
    //multimap<int,int>m;
   //unordered_map<int,int>m;
    map<int,int>m;

    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(1,6));
    m.insert(pair<int,int>(3,6));
    m.insert(pair<int,int>(14,80));
    m.insert(pair<int,int>(2,1));
 cout<<"after inserting: "<<'\n';
    for (auto i:m)
    {
        cout<<i.first<<" "<<i.second<<'\n';
        /* code */
    }
    m.erase(m.begin(),m.find(2));
    cout<<"after erase: "<<'\n';
    cout<<'\n';
    for (auto i:m)
    {
        cout<<i.first<<" "<<i.second<<'\n';
        /* code */
    }
    //m[(14)]=10;
//    cout<<"AFTER CHANGING THE VAL: "<<'\n';
   
  //  for (auto i:m)
    //{
      //  cout<<i.first<<" "<<i.second<<'\n';
        /* code */
    //}
    
}