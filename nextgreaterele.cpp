#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={100,1,11,1,120,111,123,1,-1,-100};
    int n = nums.size();
        vector<int> ans(n);
        stack <int> s;
        for (int i = n - 1; i >= 0; i--) s.push(nums[i]);
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && s.top() <= nums[i]) {
                s.pop();
            }
            ans[i] = s.empty() ? -1 : s.top();
            s.push(nums[i]);
        }
        }