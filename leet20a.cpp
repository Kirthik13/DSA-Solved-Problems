#include<bits/stdc++.h>
using namespace std;
int main(){
//     string s;
//     cin>>s;
//     // stringstream ss(s);
//     // int num;
//     // ss>>num;
// int n=s.size();
//       for(int i=n-1;i>=0;i--){
//       int k=int(s[i])-48;
//       cout<<"k :"<<k<<endl;
//       if(k%2!=0){
//         //   cout<<i;
//          cout<<s.substr(0,i+1);
//          break;
//       }
//   }
 


string st,ft;
cin>>st>>ft;
vector<string>v={"0","15","30","45"};
         string hh1;
         hh1.push_back(st[0]);
         hh1.push_back(st[1]);
string mm1;
         mm1.push_back(st[3]);
         mm1.push_back(st[4]);
     string hh2;
         hh2.push_back(ft[0]);
         hh2.push_back(ft[1]);
     string     mm2;
         mm2.push_back(ft[3]);
         mm2.push_back(ft[4]);
            int cnt{};
  for(int i=v.size()-1;i>=0;i--){

//  for(int i=0;i<v.size();i++){
     stringstream ss(mm1);
     int num;
     ss>>num;
     stringstream st(v[i]);
     int num2;
     st>>num2;
     if(mm1==v[i]){
         break;
     }
     if(num>num2){
         mm1=v[i-1];
     }

 }  
  for(int i=v.size()-1;i>=0;i--){
     stringstream ss(mm2);
     int num;
     ss>>num;
     stringstream st(v[i]);
     int num2;
     st>>num2;
     if(mm2==v[i]){
         break;
     }
     if(num>num2){
         cout<<num<<" "<<num2<<endl;
         mm2=v[i-1];
     }

 }   
 cout<<mm1<<" "<<mm2;
// while(1){

// }

}