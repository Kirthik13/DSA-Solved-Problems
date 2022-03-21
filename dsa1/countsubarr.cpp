#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={5, 0, 2, 3, 1} ;
    int k = 5;

    unordered_map<int,int>m;
    m[0]=1;
    int sum=0;
    int rem=0,ans{};

    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];

        rem=sum%k;
        if(rem<0)
        {
            rem+=k;
        }
        if(m.find(rem)!=m.end())
        {
            ans+=m[rem];
            m[rem]++;
        }
        else{
            m[rem]++;
        }
    }
//       long pre = 0;
//  vector<int> remArr(k, 0);
//     for (int i = 0; i < v.size(); i++) {
//         pre += v[i];
//         // If current remainder is 'x' then increase remainder 'x' frequency by '1'.
//         remArr[((pre % k) + k) % k] = remArr[((pre % k) + k) % k] + 1;
//     }
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // for(auto i:remArr)
    // {
    //     cout<<i<<" ";
    // }
    // int b{};
    // for(int i=0;i<k;i++)
    // {
    //     if(m[i]>1)
    //     {
    //             b+=(m[i]*(m[i]-1))/2;
    //     }
    // }
    cout<<ans;
    // cout<<b;
}