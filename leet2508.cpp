#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
int k=n;
     n=sqrt(n);
map<int,int>m;
     for(int i=0;i<=n;i++)
     {
         int sqnum=i*i;
         int fin=k-sqnum;
         if(m.find(fin)!=m.end())
         {
             cout<<"true"<<endl;
             break;
            //  return 1;
         }
         if(i*i+i*i==k)
         {
             cout<<"true"<<endl;
             break;
         }
         else{
             m[sqnum]++;
         }
     }
     cout<<"false"<<endl;

}