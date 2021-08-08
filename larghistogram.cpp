#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,1,5,6,2,3};
//     vector<int>ls(v.size(),0);
//     vector<int>rs(v.size(),v.size()-1);
// // for(auto i:rs){
// //     cout<<i<<" ";
// // }
//     stack<int>st;
//     for(int i=0;i<v.size();i++){
//         while(!st.empty() and v[st.top()]>=v[i]){
//             st.pop();
//         }
//         if(!st.empty()){
//         // }
//         // else{
//             ls[i]=st.top()+1;
//         }
//             st.push(i);
//     }
//     while(!st.empty()){
//         st.pop();
//     }
//     for(int i=v.size()-1;i>=0;i--){
//         while(!st.empty() and v[st.top()]>=v[i]){
//             st.pop();
//         }
//         if(!st.empty()){
//         // }
//         // else{
//             rs[i]=st.top()-1;
//         }
//             st.push(i);
//     }
// int res=INT_MIN;

// for(int i=0;i<v.size();i++){
//     int t=(rs[i]-ls[i]+1)*v[i];
// res=max(res,t);
// }
// cout<<res<<endl;




stack<int>st;
int res=INT_MIN;
for(int i=0;i<=v.size();i++){
    while(!st.empty() and (i==v.size() or v[st.top()]>=v[i])){
        int height=v[st.top()];
        st.pop();
        int width;
        if(!st.empty()){
            width=i-st.top()-1;

        }
        else{
            width=i;
        }
        res=max(res,height*width);
    }
    st.push(i);
}
cout<<res;
}
