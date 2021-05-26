#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1={1,2,3,4};
    vector<int>v2={2,2,3,4};
    vector<int>v3={3,3,3,5};

    int i{},j{},k{};
    int p1=INT_MIN,p2=INT_MIN,p3=INT_MIN;
    while(i<v1.size() and j<v2.size() and k<v3.size()){
        while(v1[i]==p1 and i<v1.size()){
            i++;
        }
        while(v2[j]==p2 and j<v2.size()){
            j++;
        }
        while(v3[k]==p3 and k<v3.size()){
            k++;
        }

        if(v1[i]==v2[j] and v2[j]==v3[k]){
            p1=v1[i];
            p2=v1[i];
            p3=v1[i];
            cout<<v1[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if(v1[i]<v2[j]){
            i++;
        }
        else if(v2[j]<v3[k]){
            j++;
        }
        else{
            k++;
        }
    }


}