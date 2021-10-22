#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int cnt;
void sub(vector<int>&v,int sum,int i,int cn,vector<int>&res){
    cnt++;
    if(cnt>=100){
        return;
    }
    if(i>=v.size()){
        if(sum==cn){
        for(auto i:res){
            cout<<i<<" ";
             
             
        }
        cout<<endl;

    }
        return; 
    }
    if(sum==cn){
        return;
    }
    
    cn+=v[i];
    res.push_back(v[i]);
    sub(v,sum,i,cn,res);
    cn-=v[i];
    res.pop_back();
    sub(v,sum,i+1,cn,res);

}
int main()
{
    vector<int>v={1,2,};
    vector<int>res;
    int sum=2;

    sub(v,sum,0,0,res);


}