#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="coding minutes";
    string b="cines";

    int i=a.size()-1;
    int j=b.size()-1;

    while(i>=0 and j>=0){
        if(b[j]==a[i]){
            // cout<<i<<" "<<j<<endl;
            i--;
            j--;
        }
        else{
// cout<<i<<endl;
            // if(i==0){
            //     cout<<"no match"<<endl;
            //     exit(0);
            // }
            i--;
        }
    }
    if(j==-1){
        cout<<"Match"<<endl;

    }
    else{
        cout<<"not match"<<endl;
    }

}
