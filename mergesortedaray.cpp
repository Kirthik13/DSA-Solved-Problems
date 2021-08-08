#include <bits/stdc++.h>
using namespace std;
int nextGap(int gap)
{
    if (gap <= 1)
    {
        return 0;
    }
    return (gap / 2) + (gap % 2);
}

int main()
{
    vector<int> v1 = {1, 3, 5, 7};
    vector<int> v2 = {0, 2, 6, 8, 9};
    int n = v1.size();
    int m = v2.size();
    int gap = n + m; // we took gap as sum sum the size of both the array
    int i, j;

    // gap = nextGap(gap); // everytime we will get a next gap from this
    gap=ceil(gap/2);
    for (; gap > 0; gap = ceil(gap/2))
    {

        //Comparing elements in first array v1[]
        // for (i = 0; i + gap < n; i++)
        // {
        //     if (v1[i] > v1[i + gap]) // whenever element in 1st array is greater then 2nd array swap the element and move ahead
        //         swap(v1[i], v1[i + gap]);
        // }

        // //Comparing elements in both array v1[] and v2[]
        // for (j = (gap > n) ? (gap - n) : 0; i < n && j < m; i++, j++)
        // {
        //     if (v1[i] > v2[j]) // whenever element in 1st array is greater then 2nd array swap the element and move ahead
        //         swap(v1[i], v2[j]);
        // }

        // //Comparing elements in second array v2[]
        // if (j < m)
        // {
        //     for (j = 0; j + gap < m; j++)
        //     {
        //         if (v2[j] > v2[j + gap])
        //             swap(v2[j], v2[j + gap]);
        //     }
        // }
        for(i=0;i+gap<n;i++){
            if(v1[i]>v1[i+gap]){
                swap(v1[i],v1[i+gap]);
            }
        }
        for(j=(gap>n)?(gap-n):0;i<n and j<m;j++ , i++){
            if(v1[i]>v2[j]){
                swap(v1[i],v2[j]);
            }
        }
        if(j<m){
            for(j=0;j+gap<n;j++){
            if(v2[j]>v2[j+gap]){
                swap(v2[j],v2[j+gap]);
            }
        }
        }
    }
    for(auto i:v1){
        cout<<i<<" ";
    }
    for(auto i:v2){
        cout<<i<<" ";
    }
}