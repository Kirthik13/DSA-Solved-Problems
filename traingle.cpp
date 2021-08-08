#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    int n;
    cin>>m>>n;
    int N=m+n-2;
        int r=m-1;
        double c=1;

        for(int i=1;i<=r;i++){
            c=c*(N-r+i)/i;

        }
        cout<<c;
    }
// #include<bits/stdc++.h>
// using namespace std;
// int dp[200][200];
//   int solve(vector<vector<int>>& triangle,int i,int j){
//         if(i>=triangle.size() or j>=triangle[i].size()){
//             return 0;
//         }
//         if(i==triangle.size() -1 ){
//             return dp[i][j]=triangle[i][j];
//         }
//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }
//         return dp[i][j]=min(solve(triangle,i+1,j)+triangle[i][j],solve(triangle,i+1,j+1)+triangle[i][j]);
//     }
// int main(){
//     vector<vector<int>> triangle={{2},{3,4},{6,5,7},{4,1,8,3}};
//     // vector<vector<int>> triangle={{-10}};
//     memset(dp,-1,sizeof(dp));
//      cout<< solve(triangle,0,0);   
//     }