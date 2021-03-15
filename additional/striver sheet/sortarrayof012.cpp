#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,1,0,0,1,2};
    int l=0;
    int h=v.size()-1;
    int mid=0;
    int i=0;
    while(mid<=h){
        if(v[mid]==0){
            swap(v[l],v[mid]);
            l++;
            mid++;

        }
        else if(v[mid]==1){
                mid++;

        }
        else{
            swap(v[h],v[mid]);
            h--;

        }
        // i++;
    }

for(auto i:v){
    cout<<i<<" ";
}
}