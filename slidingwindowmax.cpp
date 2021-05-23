#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 1, 4, 5, 2, 4, 6};
    int k = 3;
    // int maxii=INT_MIN;
    vector<int> res;
    //  priority_queue<pair<int,int>>pq;
    deque<pair<int, int>> pq;

    //  for(int i=0;i<nums.size();i++){
    //      while(!pq.empty() and pq.top().second<=i-k){
    //          pq.pop();
    //      }
    //      pq.push({nums[i],i});
    //      if(i>=k-1){
    //          res.push_back(pq.top().first);
    //      }
    //  }
    
  
    for (auto i : res)
    {
        cout << i << " ";
    }
}