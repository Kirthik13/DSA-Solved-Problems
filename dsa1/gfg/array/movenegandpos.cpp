#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v,int s,int m,int n)
{
    int n1=m-s+1;
    int n2=n-s;
    int l1[n1],l2[n2];

    for(int i=0;i<n1;i++)
    {
        l1[i]=v[s+i];
    }
    for(int i=0;i<n2;i++)
    {
        l2[i]=v[m+i+1];
    }

    int j=0;
    int k=s;
    int i=0;
    while(i<n1  and l1[i]<0)
    {
        v[k++]=l1[i++];
    }
    while(j<n2  and l2[j]<0)
    {
        v[k++]=l2[j++];
    }
    while(i<n1  and l1[i]>0)
    {
        v[k++]=l1[i++];
    }
    // int j=0;
    while(j<n2  and l2[j]>0)
    {
        v[k++]=l2[j++];
    }


}
void fn(vector<int>&v,int s,int n)
{
    if(s>=n)
    {
        return;
    }
    int m=(s+n)/2;
    fn(v,s,m);
    fn(v,m+1,n);
    merge(v,s,m,n);

}
int main()
{
    vector<int>v={8 ,2 ,16 ,-10 ,-7 ,1 ,-19 };
    int n=v.size();
    fn(v,0,n-1);
  
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}