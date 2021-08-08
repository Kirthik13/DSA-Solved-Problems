// #include <bits/stdc++.h>
// using namespace std;
// bool issafe(vector<vector<int>> input, int i, int j, int r)
// {
//     int n = input.size();
//     for (int k = 0; k < n; k++)
//     {
//         if (input[k][j] == r or input[i][k] == r)
//         {
//             return 0;
//         }
//     }
//     int sx = (i / 3) * 3;
//     int ex = (j / 3) * 3;
//     for (int f = sx; f < sx + 3; f++)
//     {
//         for (int g = ex; g < ex + 3; g++)
//         {
//             if (input[f][g] == r)
//             {
//                 return 0;
//             }
//         }
//     }

//     return 1;
// }
// bool solve(vector<vector<int>> input, int i, int j, int n)
// {
//     if (i == n)
//     {
//          // return input;
//         for (auto i : input)
//         {
//             for (auto j : i)
//             {
//                 cout << j << " ";
//             }
//             cout << endl;
//         }
//         return 1;
//     }

//     if (j == n)
//     {
//         return solve(input, i + 1, 0, n);

//         // ++i;
//         // j=0;
//     }
//     if (input[i][j] != 0)
//     {
//         return solve(input, i, j + 1, n);
//     }

//     for (int k = 1; k <= n; k++)
//     {

//         if (issafe(input, i, j, k))
//         {
//             input[i][j] = k;

//             if (solve(input, i, j + 1, n))
//             {

//                 return 1;
//             }
//             else{
//                  input[i][j] = 0;
//     return 0;
//             }
//         }
//     }

//    return 1;
// }
// int main()
// {
//     vector<vector<int>> input = {{3, 1, 6, 5, 7, 8, 4, 9, 2},
//                                  {5, 2, 9, 1, 3, 4, 7, 6, 8},
//                                  {4, 8, 7, 6, 2, 9, 5, 3, 1},
//                                  {2, 6, 3, 0, 1, 5, 9, 8, 7},
//                                  {9, 7, 4, 8, 6, 0, 1, 2, 5},
//                                  {8, 5, 1, 7, 9, 2, 6, 4, 3},
//                                  {1, 3, 8, 0, 4, 7, 2, 0, 6},
//                                  {6, 9, 2, 3, 5, 1, 8, 7, 4},
//                                  {7, 4, 5, 0, 8, 6, 3, 1, 0}};
//     // for(int i=0;i<9;i++){
//     //     vector<int>st;
//     //     for(int j=0;j<9;j++){
//     //         int k;
//     //         cin>>k;
//     //         st.push_back(k);

//     //     }
//     //     input.push_back(st);
//     // }
//     int n = input.size();
//     if (solve(input, 0, 0, n))
//     {
//         // return input;
//         // for (auto i : input)
//         // {
//         //     for (auto j : i)
//         //     {
//         //         cout << j << " ";
//         //     }
//         //     cout << endl;
//         // }
//     }
// }


#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
bool issafe(vector<vector<int>> input, int i, int j, int r)
{
    int n = input.size();
    for (int k = 0; k < n; k++)
    {
        if (input[k][j] == r or input[i][k] == r)
        {
            return 0;
        }
    }
    int sx = (i / 3) * 3;
    int ex = (j / 3) * 3;
    for (int f = sx; f < sx + 3; f++)
    {
        for (int g = ex; g < ex + 3; g++)
        {
            if (input[f][g] == r)
            {
                return 0;
            }
        }
    }

    return 1;
}
bool solve(vector<vector<int>> input, int i, int j, int n)
{
    if (i == n)
    {
       
        for(int i=0;i<9;i++){
        vector<int>st;
        for(int j=0;j<9;j++){
            int k=input[i][j];
        
            st.push_back(k);

        }
    res.push_back(st);
    }
        return 1;
    }

    if (j == n)
    {
        return solve(input, i + 1, 0, n);

        // ++i;
        // j=0;
    }
    if (input[i][j] != 0)
    {
        return solve(input, i, j + 1, n);
    }

    for (int k = 1; k <= n; k++)
    {

        if (issafe(input, i, j, k))
        {
            input[i][j] = k;

            if (solve(input, i, j + 1, n))
            {

                return 1;
            }
            else{
                 input[i][j] = 0;
    return 0;
            }
        }
    }

   return 1;
}
int main(){
vector<vector<int> > input={ { 1, 3, 2, 5, 6, 7, 9, 4, 8 }, {
5, 4, 6, 3, 8, 9, 2, 1, 7 }, { 9, 7, 8, 2, 4, 1,
6, 3, 5 }, { 2, 6, 4, 9, 1, 8, 7, 5, 3 }, { 7,
1, 5, 6, 3, 2, 8, 9, 4 }, { 3, 8, 9, 4, 7, 5, 1,
2, 6 }, { 8, 5, 7, 1, 2, 3, 4, 6, 9 }, { 6, 9,
1, 7, 5, 4, 3, 8, 2 }, { 4, 2, 3, 8, 9, 6, 5, 7,
1 } };
    int n=input.size();
    if(solve(input,0,0,n)){
        //  res;
         for (auto i : res)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    // return res;
}