// #include <bits/stdc++.h>
// using namespace std;
// #define pb push_back
// #define deb(x) cout << #x << "=" << x << endl
// #define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
// bool ispalin(string k){
//     int st=0;
//     int end=k.size()-1;
//     while(st<=end){
//         if(k[st]!=k[end]){
//             return 0;
//         }
//         st++;
//         end--;
//     }
//     if(k.size()==0){
//         return false;
//     }
//     return true;
// }
// void backtrack(string s, vector<vector<string>>& v,vector<string>&V,int lo){
// if(lo>=s.size()){
//     v.pb(V);
//     return;
// }
// int n=s.size();
// for(int hi=lo;hi<=n;hi++){
//     string k=s.substr(lo,hi-lo);
//     int p=hi-lo;
    
    
//     // deb2(lo,p);

//     // deb(k);
//     // cout<<k<<endl;
//     // if(k.size()>0){
//     if(ispalin(k)){
//         V.pb(k);
//         // deb(hi);   
//         backtrack(s,v,V,hi);
//         V.pop_back();
//     }
//     // }
// }
// }
// int main()
// {
//     string s;
//     cin >> s;
//     vector<vector<string>> v;
//         vector<string> V;
//     if (s.size() == 0)
//     {
//         v.pb(V);
//     }
//     v.clear();

//     backtrack(s,v,V,0);
//     for(auto i:v){
//         for(auto j:i){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
bool ispalin(string k){
    int st=0;
    int end=k.size()-1;
    while(st<=end){
        if(k[st]!=k[end]){
            return false;
        }
        st++;
        end--;
    }
    if(k.size()==0){
        return false;
    }
    return true;

}
void helper(string s, vector<vector<string>>& res, vector<string>&v,int lo){
    if(lo==s.size()){
        res.pb(v);
        return;
    }
    int n=s.size();
    for(int i=lo;i<=n;i++){
        string k=s.substr(lo,i-lo);
        if(ispalin(k)){
            v.pb(k);
            helper(s,res,v,i);
            // cout<<"before : "<<v.back()<<endl;
            // for(auto i:v){
            //     cout<<i<<" ";
            // }
            // cout<<'\n';
            v.pop_back();
            // v.clear();
            // cout<<"after : "<<v.back()<<endl;
        }
    }
}
int main(){
    string s;
    cin>>s;
    vector<vector<string>> res;
   
    vector<string>v;
    if(s.size()==0){
        res.pb(v);
    }
    helper(s,res,v,0);
    for(auto i:res){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}