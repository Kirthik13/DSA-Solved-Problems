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
    vector<int>v1={1,3,5,7};
    vector<int>v2={2,4,6};
int i=v1.size()-1;
int j=0;
    while(i>0 and j<v2.size()){
        if(v1[i]>v2[j]){
            swap(v1[i],v2[j]);
            j++;
            i--;
        }
        else{
            i--;
        }
    }

    // sort(begin(v1),end(v1));
    // sort(begin(v2),end(v2));
    int n1=v1.size();
    int n2=v2.size();
    mergesort(0,n1-1,v1);
    mergesort(0,n2-1,v2);

    for(auto i:v1){
        cout<<i<<" "; 
    }
    for(auto i:v2){
        cout<<i<<" "; 
    }
}