#include<bits/stdc++.h>
using namespace std;

void rec(int *a,int l){
  static int j;
if(j==4){
  
  
  return;

}
    
   j++;  
  rec(a,l);
 j--;
  cout<<a[j]<<" "<<endl;
 return ;

    
  
}
int main(){
int a[3];
for(int i=0;i<=3;i++){
  cin>>a[i];
}
int l;
for(int i=0;i<=3;i++){
l++;
}


rec(a,l);
return 0;
}