#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int vote=v[0];
    int p=0;
    sort(v.begin()+1,v.end());

  
  while(vote<= *max_element(v.begin()+1,v.end())){

    vote++;

    v[n-1]--;
    p++;
    sort(v.begin()+1,v.end());


}
cout<<p;
}