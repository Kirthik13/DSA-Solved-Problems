#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int cntnos(vector<int>&v,int ele){
    int s=0;
    int e=v.size()-1;

    while(s<=e){
        int mid=(s+e)/2;
        if(v[mid]<=ele){
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }
    return s;
}
int main()
{
    vector<vector<int>> v = {{1, 3, 6}, {2, 6, 9}, {3, 6, 9}};

    int s=1;
    int e=1e9;
int n=v.size();
int m=v[0].size();
    while(s<=e){
        int mid=(s+e)/2;
        if(mid==8){
            cout<<"ASD";
        }
        int cnt{};
        for(int i=0;i<n;i++){
            cnt+=cntnos(v[i],mid);
        }
        if(cnt<=((n*m)/2)){
            
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    
    }
    
    cout<<s;
}