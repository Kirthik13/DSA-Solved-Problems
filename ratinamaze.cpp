#include<bits/stdc++.h>
using namespace std;
vector<string>ans;
    // string dir="DLRU";
void solve(vector<vector<int>>&v, vector<int>di, vector<int>dj,vector<vector<int>>&vis,int row,int col,string str,int n){
 if(row==n-1 && col==n-1) {
            ans.push_back(str);
            return; 
        }
        string dir = "DLRU"; 
        for(int ind = 0; ind<4;ind++) {
            int nexti = row + di[ind]; 
            int nextj = col + dj[ind]; 
            if(nexti >= 0 && nextj >= 0 && nexti < n && nextj < n && !vis[nexti][nextj] && v[nexti][nextj] == 1) {
                vis[row][col] = 1; 
                solve(v,di,dj,vis,nexti,nextj,str+dir[ind],n);
                vis[row][col] = 0; 
            }
        }

}
int main(){
    int n=4;
    vector<vector<int>>v={{0 ,1 ,1 ,1 },
                          {1,1,1,0},{1,0,1,1},{0,0,1,1}
                          };
         vector<int>di={1,0,0,-1};
         vector<int>dj={0,-1,1,0};
vector<vector<int>>vis(n,vector<int>(n,0));
         if(v[0][0]){solve(v,di,dj,vis,0,0,"",n);}
         
         for(auto i:ans){
cout<<i<<" ";
         }
}