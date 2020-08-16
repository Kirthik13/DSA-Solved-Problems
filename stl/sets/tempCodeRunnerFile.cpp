#include<bits/stdc++.h>
#define cc cout<<endl;
#define cd   for(auto i:s){cout<<i<<" ";}
#define ce   for(auto i:s2){cout<<i<<" ";}
using namespace std;

int main(){
    set<int>s;
    s.emplace(122);
    s.emplace(14);
    s.emplace(15);
    s.emplace(12);
    cc
   cd
   cc
  
    if(s.find(14234)!=s.end()){
        cout<<"yes";

    }
    else{
        cout<<"nope";
    }
    cc cd
    cc
    auto iac=s.find(14);
    s.erase(iac);
    cc  
    cd
auto itt= s.emplace_hint(s.begin(),18);
cc cd
s.emplace_hint(itt,13);
cc cd 
set<int>s2;
s2.insert(13);
s2.insert(1);
s2.insert(1324);
s2.insert(4);

cc ce
int* arr;
arr=s2.get_allocator().allocate(7);
cc
for(int i=0;i<7;i++){
    arr[i]=i;
}
cc
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
s2.get_allocator().deallocate(arr,7);cc
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
cc



auto ian=s2.count(123);
cout<<ian;

cc;
cout<<s2.size();
cc ce
s2.insert(14);
cc ce
auto pos=s2.lower_bound(1500);
cc
cout<<*pos;
}
