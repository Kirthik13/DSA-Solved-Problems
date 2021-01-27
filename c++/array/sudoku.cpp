#include<bits/stdc++.h>
using namespace std;
#define N 9

bool row_valid(int row,int col,int grid[N][N],int k){
for(int i=0;i<9;i++){
    if(grid[row][i]==k){
        return false;
    }
}
return true;
    
    
}
bool col_valid(int row,int col,int grid[N][N],int k){
for(int i=0;i<9;i++){
    if(grid[i][col]==k){
        return false;
    }
}
return true;
    
    
}
bool sub_valid(int row,int col,int grid[N][N],int k){
    int rs,re,cs,ce;
    for(int i=0;i<9;i+=3){
        if(row>=i and row<i+3){
            rs=i;
            re=i+3;
            
        }
        if(col>=i and col<i+3){
            cs=i;
            ce=i+3;
            
        }
    }
    for(int i=rs;i<re;i++){
        for(int j=cs;j<ce;j++){
            if(grid[i][j]==k){
                return false;
            }
        }
    }
    return true;
}
bool valid(int row,int col,int grid[N][N],int k){
    if(row_valid(row,col,grid,k) and col_valid(row,col,grid,k) and sub_valid(row,col,grid,k)){
        return true;
    }
    return false;
}
bool sudoku(int i,int j,int grid[N][N]){
    if(i==N) return true;
    if(grid[i][j]!=0){
        if(j==8){
            return sudoku(i+1,0,grid);
        }
        else{
             return sudoku(i,j+1,grid);
        }
    }
    for(int k=1;k<=9;k++){
        if(valid(i,j,grid,k)){
            grid[i][j]=k;
            if(j==8){
                if(sudoku(i+1,0,grid)){
                    return true;
                }
            }
            else{
                  if(sudoku(i,j+1,grid)){
                    return true;
                }
            }
            grid[i][j]=0;
        }
    }
    return false;
}
bool SolveSudoku(int grid[N][N])  
{ 
return sudoku(0,0,grid);
 
}
void printGrid (int grid[N][N]) 
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<grid[i][j]<<" ";
        }
       
    }
}
int main(){
    int grid[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>grid[i][j];
        }
    }
    if(SolveSudoku(grid)==1){
        printGrid(grid);
    }
    else{
        cout<<"NO SOL EXITS"<<endl;
    }
}