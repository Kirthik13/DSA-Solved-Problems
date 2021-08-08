#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
set<vector<vector<int>>>st;
void gen(vector<vector<int>> &v, int idx, int jdx, int m, int n,int &cnt)
{
    if (jdx == n and idx < m)
    {
        jdx = 0;
        idx += 1;
    }
    if (idx == m)
    {

         for(auto i:v){
           for(auto j:i){
               cout<<j<<" ";
            // if(j==-1){
                // return;
            // }
           }
           cout<<endl;
       }
       cout<<endl;
        cnt++;
        st.insert(v);
        return;
    }
    for (int i = 0; i < 3; i++)
    {
    //          for(auto i:v){
    //        for(auto j:i){
    //            cout<<j<<" ";
    //        }
    //        cout<<endl;
    //    }
    //    cout<<endl;
        if (idx == 0 and jdx == 0)
        {
            if(v[idx][jdx]==-1){
            v[idx][jdx] = i;
            gen(v, idx, jdx + 1, m, n,cnt);
            v[idx][jdx] = -1;
            }
        }
        else if (idx < m and jdx < n)
        {
            if (idx > 0 and jdx == 0)
            {
                if (v[idx - 1][n - 1] != i)
                {
                     if(v[idx][jdx]==-1){
                    v[idx][jdx] = i;
                    gen(v, idx, jdx + 1, m, n,cnt);
                    v[idx][jdx] = -1;
                     }
                }
            }
            else
            {
                if(v[idx][jdx-1]!=i){
                     if(v[idx][jdx]==-1){
                v[idx][jdx] = i;
                gen(v, idx, jdx + 1, m, n,cnt);
                v[idx][jdx] = -1;
                     }
                }
            }
        }
    }
}
// void gen(vector<vector<int>> v,int idx,int jdx,int m,int n){

// //    cout<<"ASD";
// // cout<<"idx : "<<idx;
//         // cout<<" jdx : "<<jdx<<endl;
//      if(jdx==n and idx<m){
//         //  cout<<"kri"<<endl;
//               jdx=0;
//               idx=idx+1;
//             //   cout<<"jdx : "<<jdx<<endl;
//             //   if(idx==m){
//             //       cout<<"hi"<<endl;
//             //       return;
//             //   }
//     }
//     // cout<<"idx1 : "<<idx;
//         // cout<<" jdx2 : "<<jdx<<endl;
//     if(idx==m and jdx==0){
//         //   cout<<"hi"<<endl;
//         cnt++;
//         return;
//     }
//     for(int i=0;i<3;i++){

    //    for(auto i:v){
    //        for(auto j:i){
    //            cout<<j<<" ";
    //        }
    //        cout<<endl;
    //    }
//             if(jdx==0 and idx!=0 and v[idx-1][n-1]!=i){
//                  v[idx][jdx]=i;

//               gen(v,idx,jdx+1,m,n);
//               v[idx][jdx]=-1;
//             }
//          else if((jdx<n and idx<m) and jdx!=0 and v[idx][jdx-1]!=i){
//               v[idx][jdx]=i;

//               gen(v,idx,jdx+1,m,n);
//               v[idx][jdx]=-1;
//           }

//           else if(jdx<n and idx<m){
//             //    cout<<"Asd";
//             //    cout<<"i : "<<i<<endl;

//                  v[idx][jdx]=i;
//               gen(v,idx,jdx+1,m,n);
//               v[idx][jdx]=-1;
//           }
//     }

// }
int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> v(m, vector<int>(n, -1));
    int cnt{};
    gen(v, 0, 0, m, n,cnt);
    cout << st.size()%mod;
    // for(auto i:v){
    //     for(auto j:i)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
}