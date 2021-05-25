#include<bits/stdc++.h>
using namespace std;
int inv(int s,int e,vector<int>&v){
    int i=s;
    int m=(s+e)/2;
    int j=m+1;
    vector<int>tem;
    int cnt{};
    while(i<=m and j<=e){
        if(v[i]<v[j]){
            tem.push_back(v[i++]);
        }
        else{
            cnt+=m-i+1;
            tem.push_back(v[j++]);
            
        }
    }
     while(i<=m){
       
            tem.push_back(v[i++]);
        }
     while(j<=e){
       
            tem.push_back(v[j++]);


        }
        int k=0;
        for(int p=s;p<=e;p++){
            v[p]=tem[k++];
        }

return cnt;

}
int invcount(int s,int e,vector<int>&v){
    int mid=(s+e)/2;
if(s>=e){
    return 0;
}
int c1=invcount(s,mid,v);
int c2=invcount(mid+1,e,v);
int crossinv=inv(s,e,v);
return c1+c2+crossinv;

}
int main(){
    vector<int>v={10,5,2,0,7,6,4};
    int s=0;
    int e=v.size()-1;
    cout<<invcount(s,e,v);
    // cout<<
    
}