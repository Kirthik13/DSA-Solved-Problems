#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v={1,3,-1,-3,5,3,6,7};
   vector<int>res;
   int  k = 3;
   deque<int>dq;
    for(int i=0;i<v.size();i++){
        if(!dq.empty() and dq.front()==i-k){
            dq.pop_front();

        }
        while (!dq.empty() and v[dq.back()]<v[i])
        {
            dq.pop_back();
            /* code */
        }
        dq.push_back(i);
        if(i>=k-1){
            res.push_back(v[dq.front()]);
        }
        
    }
    //  for (int i=0; i<nums.size(); i++) {
    //         if (!dq.empty() && dq.front() == i-k) dq.pop_front();
            
    //         while (!dq.empty() && nums[dq.back()] < nums[i])
    //             dq.pop_back();
            
    //         dq.push_back(i);
    //         if (i>=k-1) ans.push_back(nums[dq.front()]);
    //     }

    for(auto i:res){
        cout<<i<<" ";
    }
}