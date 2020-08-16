#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
 vector<int>v;
for(int i=0;i<t;i++){
int a;
cin>>a;
v.push_back(a);

}
int low=v[0];
int high=v[v.size()-1];
int mid=v[ceil((v.size()-1)/2)];

int c=0;
// cout<<"l : "<<low<<" m : "<<mid<<" h : "<<high<<"\n";
if(low==mid and mid==high){
    cout<<"YES"<<'\n';
    return 0;
}
for(auto i=1;i<v.size();i++){
// if(low<=mid and mid>=high){
    if(i<ceil((v.size()-1)/2) and i!=mid){
        
        if(v[i-1]<v[i] ){
            c++;
        }
        
        else if(i==mid){
             if(v[i-1]<=v[i]){
            c++;
        }
        }
       
         
        
    
    else if(i>=ceil((v.size()-1)/2) and i!=mid){
       
        if(v[i-1]>=v[i]){
            c++;
        }
          else if(i==mid){
             if(v[i-1]<=v[i]){
            c++;
        }
    
        }
        
        
}




cout<<" c : "<<c<<endl;
if(c==v.size()-1){
    cout<<"YES"<<'\n';
}
else{
    cout<<"NO"<<'\n';
}


}
