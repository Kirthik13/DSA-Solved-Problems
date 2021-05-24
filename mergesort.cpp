#include<bits/stdc++.h>
using namespace std;
void merge(int s,int e,vector<int>&v){
    int i=s;
    int m=(s+e)/2;
    int j=m+1;
    vector<int>tem;
    while(i<=m and j<=e){
        if(v[i]<v[j]){
            tem.push_back(v[i]);
            i++;
        }
        else{
            tem.push_back(v[j]);
            j++;
        }
    }

    while(i<=m)
    {
tem.push_back(v[i]);
            i++;
    }
    
    while(j<=e)
    {
            tem.push_back(v[j]);
            j++;
        }
int k=0;
        for(int p=s;p<=e;p++){
            v[p]=tem[k++];
        }
}
void mergesort(int s,int e,vector<int>&v){
if(s>=e){
    return;
}
int mid=(s+e)/2;
mergesort(s,mid,v);
mergesort(mid+1,e,v);
merge(s,e,v);
}
int main(){
    vector<int>v={10,5,2,0,7,6,4};
    int s=0;
    int e=v.size()-1;
    mergesort(s,e,v);
    for(auto i:v){
        cout<<i<<" ";
    }
}