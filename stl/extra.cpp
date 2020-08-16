#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second){
        return true;
    }
    else if(p1.second==p2.second){
    if(p1.first>p2.first){
        return true;
    }
    }
    return false;   
}
int main(){
pair<int,int>a[3]={{1,2},{4,1},{2,1}};

for(int i=0;i<3;i++){
cout<<a[i].first<<" "<<a[i].second<<"\n";

}
cout<<"ascending: "<<'\n';
sort(a,a+3);
cout<<'\n';
for(int i=0;i<3;i++){
cout<<a[i].first<<" "<<a[i].second<<"\n";

}
cout<<'\n';
cout<<"descending: "<<'\n';
sort(a,a+3,comp);
cout<<'\n';
for(int i=0;i<3;i++){
cout<<a[i].first<<" "<<a[i].second<<"\n";

}
cout<<'\n';
string s="123";
do{
    cout<<s<<'\n';
}while(next_permutation(s.begin(),s.end()));
cout<<"\n";
int ar[3]={12,4,5};
auto l=max_element(ar,ar+3);
cout<<*l;

}