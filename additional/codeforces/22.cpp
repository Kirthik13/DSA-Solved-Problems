#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
 long double sum=0;
  long  double res=0;
    for(auto i=v.begin();i!=v.end();i++){
        sum+=*i;
    }
    res=sum/v.size();
    cout<<setprecision(12)<<fixed<<res;
}