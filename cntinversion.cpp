#include <bits/stdc++.h>
using namespace std;
// long long long long int  merge(long long long long int  arr[], long long long long int  s, long long long long int  e, long long long long int  N)
// {
//     long long long long int  mid = (s + e) / 2;
//     long long long long int  i = s;
//     long long long long int  j = mid + 1;
//     long long long long int  k = s;
//     long long long long int  temp[N];
//     long long long long int  inarrert = 0;
//     while (i <= mid && j <= e)
//     {
//         if (arr[i] <= arr[j])
//             temp[k++] = arr[i++];
//         else
//         {
//             temp[k++] = arr[j++];
//             inarrert += mid - i + 1;
//         }
//     }
//     while (j <= e)
//         temp[k++] = arr[j++];
//     while (i <= mid)
//         temp[k++] = arr[i++];
//     for (long long int  i = s; i <= e; i++)
//         arr[i] = temp[i];
//     return inarrert;
// }
// long long long long int  inarrersion(long long arr[], long long long long int  s, long long long long int  e, long long long long int  N)
// {
//     if (s >= e)
//         return 0;
//     long long long long int  mid = (s + e) / 2;
//     long long long long int  x = inarrersion(arr, s, mid, N);
//     long long long long int  y = inarrersion(arr, mid + 1, e, N);
//     long long long long int  z = merge(arr, s, e, N);
//     return x + y + z;
// }

// long long int  main()
// {
//    long long long long int  arr[] = {2, 4, 1, 3, 5};
//     long long long long int  N = 5;
//     cout << inarrersion(arr, 0, N - 1, N);

//     // cout << mergesort(arr, 0, n - 1, n);
// }
long long int  me(long long int  arr[],long long int  s,long long int  e,long long int  n){
long long int  i=s;
long long int  mid=(s+e)/2;
long long int  j=mid+1;
long long int  cnt{};

long long int  tem[n];
long long int  k=s;
while(i<=mid and j<=e){
    if(arr[i]<=arr[j]){
        tem[k++]=arr[i];
        i++;
    }
    else{
        tem[k++]=arr[j];
        j++;

        cnt+=(mid-i+1);
    }
}
while(i<=mid){
    //  tem.push_back(arr[i]);
        tem[k++]=arr[i];

        i++;
}
while(j<=e){
    //  tem.push_back(arr[j]);
        tem[k++]=arr[j];

        j++;
}
// long long int  k=0;
for(long long int  i=s;i<=e;i++){
    arr[i]=tem[i];
}
return cnt;
}
long long int  mergesort(long long int  arr[],long long int  s,long long int  e,long long int  n){
if(s>=e){
    return 0;
}
long long int  mid=(s+e)/2;
long long int  x=mergesort(arr,s,mid,n);
long long int  y=mergesort(arr,mid+1,e,n);
long long int  z=me(arr,s,e,n);
return x+y+z;
}

int  main(){
    long long int  arr[]={2,4,1,3,5};
    long long int  n=5;
    cout<<mergesort(arr,0,n-1,n);

}