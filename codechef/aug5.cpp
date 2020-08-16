
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int t;
    cin>>t;
    while(t--){
int n,k;
cin>>n>>k;
vector<int>v;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);
}

int fullcount=0;
for(int i=0;i<n;i++){
    auto x=count(v.begin(),v.end(),v[i]);
    if(x>1){
        fullcount+=x+k;
    }
}
int halfcount;
int c=0;
set<int>s(v.begin(),v.end());
vector<int>v2(v.begin(),v.end());

vector<vector<int>>v3;
vector<int>v4;
while(1){

if(s.size()==v2.size()){
v3.push_back(v2);
break;
}
else{
    for(int i=1;i<v2.size();i++){
        if(v2[i-1]==v2[i]){
            v4.push_back(v2[i]);
        }
    }

    
      copy( s.begin(),s.end(),back_inserter(v2));
      v2=v4; 
}
}
map<int,int>m;
for(int i=0;i<v3.size();i++){
   auto x=count(v3.begin(),v3.end(),v[i]);
    m.emplace(v[i],x);
}
// for(int i=0;i<n;i++){
//     auto x=count(v.begin(),v.end(),v[i]);
//     if(x>1){
     
           
//         c++;
//         }
//         for(auto j=it;j!=v.end();j++){
//             x=count(v.begin(),v.end(),v[i]);
//             if(x>1){
//                 c++;
//             }
          
            
//         }
//     }
// }
// halfcount=c*k;
// cout<<fullcount<<" "<<halfcount<<'\n';

// if(fullcount<halfcount){
//     cout<<fullcount<<'\n';
// }
// else{
//     cout<<halfcount<<'\n';

// }

    }


}