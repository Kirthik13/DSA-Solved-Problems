#include<iostream>
#include<vector>
using namespace std;

int main()
{
int n,k;
cin>>n>>k;


if(n>=k){

if(k>=1&& k<=n&&n<=50){
  vector<int>S;
for(int i=0;i<n;i++){
    int bc;
    cin>>bc;
    S.push_back(bc);

}

int count=0;





// for(auto j=S.begin();j!=S.end();j++){
//     if(*j==S[k]&&S[k]!=0){
       
//         abc++;
//     }
  
    
// }
// if(abc==S.size()){
//     cout<<n;
// }
--k;

for(auto i=S.begin();i!=S.end();i++){
  
    if(S[k]>=0){
      if(*i>=S[k] && *i!=0){
             count++;
         }  
    }
 }

 cout<<count;


}
}

else{
    exit(1);
}
return 0;
}






 




