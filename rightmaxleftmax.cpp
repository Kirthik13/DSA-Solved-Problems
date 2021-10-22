#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
//    vector<int>v={3,5,4,5,6};
   vector<int>v={5, 1, 4, 3, 6, 8, 10, 7, 9};
    n=v.size();
//  int leftMax[n];
//     leftMax[0] = INT_MIN;
 
//     // Fill leftMax[]1..n-1]
//     for (int i = 1; i < n; i++)
//         leftMax[i] = max(leftMax[i-1], v[i-1]);
 
//     // Initialize minimum from right
//     int rightMin = INT_MAX;
 
//     // Traverse vay from right
//     for (int i=n-1; i>=0; i--)
//     {
//         // Check if we found a required element
//         if (leftMax[i] < v[i] && rightMin > v[i])
//              cout<< i;
 
//         // Update right minimum
//         rightMin = min(rightMin, v[i]);
//     }
    vector<int>l(n);
    vector<int>r(n);
    l[0]=INT_MIN;
    // for(int i=1;i<n;i++)
    // {
    //     l[i]=max(l[i-1],v[i]);
    // }
    //     leftMax[0] = INT_MIN;
 
    // Fill leftMax[]1..n-1]
    for (int i = 1; i < n; i++)
        l[i] = max(l[i-1], v[i-1]);
 
    // Initialize minimum from right
//     r[n-1]=INT_MAX;
//     for(int i=n-2;i>=0;i--)
//     {
//         r[i]=min(v[i+1],v[i]);
//     }
//     // for(auto i:r)
//     // {
//     //     cout<<i<<" "; 
//     // }
//     int cnt{};
//     for(int i=0;i<n;i++)
//     {
//         if(v[i]>=l[i] )
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(v[j]<=r[j] and v[j]>v[i])
//                 {
//                     // cout<<i<<"  "<<j<<endl;
//                     cnt++;
//                 }
//             }
//         }
//     }
// cout<<cnt%1000000007;
int rs=INT_MAX;
for(int i=n-1;i>=0;i--)
{
    // cout<<v[i]<<" "<<rs<<" "<<l[i]<<endl;
    if(v[i]<rs and l[i]<v[i])
    {
        cout<<i<<endl;
    }
    rs=min(rs,v[i]);
}
}