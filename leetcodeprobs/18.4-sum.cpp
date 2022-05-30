/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int tar) {
        
sort(begin(v),end(v));

int n=v.size();
vector<vector<int>>res;
for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){
        int req=tar-v[i]-v[j];

        int k=j+1;
        int l=n-1;
        while(k<l){
            int tar2=v[k]+v[l];
            if(tar2<req){
                k++;
            }
            else if(tar2>req){
                l--;
            }
            else{
                vector<int>v2;

                v2.emplace_back(v[i]);
                v2.emplace_back(v[j]);
                v2.emplace_back(v[k]);
                v2.emplace_back(v[l]);

                res.emplace_back(v2);
                int first=v[k];
                int second=v[l];

               while(v[k]==first and k<l){
                    k++;
                }
                while(v[l]==second and l>k){
                    l--;
                }
              

            }
              while(v[i+1]==v[i] and i+1<n-1){
                    i++;
                }
                while(v[j+1]==v[j] and j+1<n-1){
                    j++;
                }

        }
    }
}


return res;
    }
};
// @lc code=end

