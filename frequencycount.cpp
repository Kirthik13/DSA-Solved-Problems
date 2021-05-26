#include <bits/stdc++.h>
using namespace std;
int lobo(vector<int>v,int k){
    int fo{};
    int i=0;
    int j=v.size()-1;
    int m=(i+j)/2;
    while(i<=j){
        m=(i+j)/2;
        if(v[m]==k){
            fo=m;
            j=m-1;
            // cout<< m;
            // exit(1);
        }
         else if(v[m]>k){
            j=m-1;
        }
        else if(v[m]<k){
            i=m+1;
        // m=(i+j)/2;
        }
    }
    return fo;
}
int upbo(vector<int>v,int k){
    int lo{};
    int i=0;
    int j=v.size()-1;
    int m=(i+j)/2;
    while(i<=j){
        m=(i+j)/2;
        if(v[m]==k){
            lo=m;
            i=m+1;
            // cout<< m;
            // exit(1);
        }
         else if(v[m]>k){
            j=m-1;
        }
        else if(v[m]<k){
            i=m+1;
        // m=(i+j)/2;
        }
    }
    return lo;
}
int main()
{
    vector<int>v={0,0,1,2,2,2,2,2,2,2,2};
    int k;
    cin>>k;
    int fo=-1;
    int lo;
    cout<<lobo(v,k)<<endl;
    cout<<upbo(v,k);
    
}