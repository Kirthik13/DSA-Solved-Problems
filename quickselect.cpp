#include<bits/stdc++.h>
using namespace std;
int parti(vector<int>&v,int s,int e){
int pivot=v[e];
int i=s-1;
for(int j=s;j<e;j++){
    if(v[j]<pivot){
        swap(v[++i],v[j]);
    }

}
swap(v[i+1],v[e]);
return i+1;
}
void quic(vector<int>&v,int s,int e,int k){
    // if(s>=e){
    //     return ;

    // }
    int p=parti(v,s,e);
    if(p==k){
        return ;
    }
    else if(p>k){
        quic(v,s,p-1,k);
    }
    else if(p<k){
        quic(v,p+1,e,k);
    }
}
int main(){
    vector<int>v={10,5,0,7,6,4};
    int s=0;
    int e=v.size()-1;
    int k;
    cin>>k;
    quic(v,s,e,k);
    cout<<v[k]<<endl;
}
