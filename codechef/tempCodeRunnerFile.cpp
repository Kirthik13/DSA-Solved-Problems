
#include <bits/stdc++.h>
using namespace std;


int main()
{
//     vector<vector<int>>v ;    
  
//     // v.push_back(9);
//     // v.push_back(8);
//     // v.push_back(14);
//     // v.push_back(2);
//     // v.push_back(4);
//     // v.push_back(1);
//    // Displaying the 2D vector 
//    for(int i=0;i<3;i++){
//        vector<int>v1;
//        for(int j=0;j<3;j++){
//            int a;
//            cin>>a;
//            v1.push_back(a);
//        }
//        v.push_back(v1);
//    }
// vector<int>po;
// multimap<int,int>mo;
//     unordered_map<int,int>m;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//        auto x= count(v[i].begin(),v[i].end(),v[i][j]);
//         // m[v[i][j]]++;
//         mo.emplace(v[i][j],x);
//     }
// }
        
    

//    cout<<'\n'<<'\n';
// //    for(auto i:po){
// //    cout<<i<<" ";
// //    }
//    for(auto i:mo){
//        cout<<i.first<<" "<<i.second<<"\n";
//    }

vector<int>v={12,344,6,21};
int sor=0;
int min=v[0];
int i=0;
for(int i=0;i<v.size();i++){
    min=v[i];
    for(int j=i+1;j<v.size();j++){
        if(v[j]<min){
            min=v[j];
            swap(v[j],v[i]);
        }
    }
}
for(auto i:v){
    cout<<i<<" ";
}
}
