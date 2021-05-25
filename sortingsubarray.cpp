#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={0,2,4,7,6,5};
    bool ch=true;
    int s;
    for( s=1;s<a.size();s++){
        if(a[s]<a[s-1]){
            
            ch=false;
            break;
        }
    }
    // if(ch){
    //     // cout<<{-1,-1};
    // }
    int e;
    for(e=a.size()-1;e>0;e--){
        if(a[e]<a[e-1]){
            
        
            break;
        }
    }
    int m=a[s],mi=a[s];
    for(int i=s;i<=e;i++){
        m=max(a[i],m);

        mi=min(a[i],mi);

    }
    for(int i=s-1;i>=0;i--){
        if(a[i]>mi){
            s=i;
        }

    }
    for(int i=s+1;i<a.size();i++){
        if(a[i]<m){
            e=i;
        }

    }
    cout<<s<<" "<<e<<endl;

}
