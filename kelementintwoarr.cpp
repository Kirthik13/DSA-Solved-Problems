#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define deb(x) cout<<"#x"<<" : "<<x<<endl
int main(){
 vector<int>v1={ 7, 12,14,15};   
 vector<int>v2={1, 2,3,4, 9, 11};
 int k;
 cin>>k;
if(v1.size()>v2.size()){
    swap(v1,v2);
}
int n1=v1.size();
int n2=v2.size();
 int s=max(0,k-n2);
 int e=min(n1,k);
 cout<<" s : "<<s<<" e : "<<e<<endl;
 int cnt{};
 while(s<=e){
     int cut1=(s+e)/2;
     int cut2=k-cut1;
     cout<<"cuts : "<<endl;
cout<<cut1<<" "<<cut2<<endl;
         cnt++;
     int l1=(cut1==0)?INT_MIN:v1[cut1-1];
     int l2=(cut2==0)?INT_MIN:v2[cut2-1];
     int r1=(cut1==n1)?INT_MAX:v1[cut1];
     int r2=(cut2==n2)?INT_MAX:v2[cut2];

     if(l1<=r2 and l2<=r1){
        //  return max(v[l1],v[l2]);
         cout<< "Ans : "<<max(l1,l2)<<endl;
         break;
     }
     else if(l1>r2){
        //  cout<<"ASD";
         e=cut1-1;
     }
     else{
         s=cut1+1;
     }


 }
 cout<<" cnt : "<<cnt<<endl;
//  return 1;

}