#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,2,3,2,3,4,4,2};
    int n=v.size();
    int ans1 = -1;
    int ans2 = -1;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < v.size(); i++)
    {
      

        if(ans1==v[i]){
            cnt1++;
        }
        else if(ans2==v[i]){
            cnt2++;
        }
        else  if(cnt1==0){
            ans1=v[i];
            cnt1++;
        }
        else if(cnt2==0){
            ans2=v[i];
cnt2++;
        }
        else{
         cnt1--;   
         cnt2--;   
        }
  
    }
    // cout<<ans1<<" "<<ans2;
    // cout<<cnt1<<" "<<cnt2;
        if(count(begin(v),end(v),ans1)>(n/3)){
        cout<<ans1;}
        if(count(begin(v),end(v),ans2)>(n/3)){
        cout<<" "<<ans2;}
}