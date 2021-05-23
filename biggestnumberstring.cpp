#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,3,2,1,4,1,3,2,1,1,2};
    int k=8;
    int i{},j{};
    int cs{};
    int res1=INT_MAX;
    pair<int,int>res;
   
        // cout<<" cs : "<<cs<<endl;
     
        while(j<v.size() ){
            cs+=v[j++];
           
             while(cs>k and i<j){
                 
                cs-=v[i++];

            }
             if(cs==k){
                // res.push_back({i,j-1});
                if(res1>j-i-1){
                res1=j-1-i;
                // cout<<res1<<endl;
                
                    res=make_pair(i,j-1);

                }

                
            }

        }
  
 cout<<res.first<<" "<<res.second;
}