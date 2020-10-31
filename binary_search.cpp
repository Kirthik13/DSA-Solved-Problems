#include<bits/stdc++.h>
using namespace std;
int bi(int k,int low,int high,vector<int>&v){
  while(low<=high){
    int mid=(low+high)/2;
    if(v[mid]>k){
      high=mid-1;
    }
    else if(v[mid]<k){
      low=mid+1;
    }
    else if(v[mid]==k){
      return mid;
    }
  }
  return -1;
}
int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto &i :v){
    cin>>i;
  }
  int p=bi(3,0,v.size()-1,v);
  cout<<endl<<"p: "<<p;
}