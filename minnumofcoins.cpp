#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main()
{
    vector<int>v={1,2,5,10,20,50,100,1000};

    int nos;
    cin>>nos;
    int curr{};
    int res{};


    int i=v.size()-1;
    while(nos>0 and i>=0){
        if(nos<v[i] ){
            i--;
        }
        else{
            curr=curr+v[i];
            nos-=v[i];
            res++;
        }
 
    }
    cout<<res;
}