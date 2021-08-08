#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v={{ 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };

int k;
cin>>k;
int i=0;
int j=v.size()-1;
while(i<=v.size() or j>=0){
    if(v[i][j]==k){
        cout<<i<<" "<<j;
        exit(1);
    }
    else if(v[i][j]>k){
        j--;
    }
    else {
        i++;
    }
}

    
}