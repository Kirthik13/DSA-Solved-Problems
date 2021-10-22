#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>balls={2,0,1,2,0,1,2,0};
    int l=0;
    int m=0;
    int h=balls.size()-1;
    while(m<=h){
        if(balls[m]==0){
            swap(balls[l++],balls[m++]);
        }
        else if(balls[m]==1){
            m++;
        }
        else{
            swap(balls[m],balls[h--]);
        }
    }
  
    for(auto i:balls){
        cout<<i<<" ";
    }
}