#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int cnt;
void sub(string s,int idx,int siz){
   
    if(idx==siz ){
        cout<<s<<endl;
        return;
    }
    int j=1;
    for(int i=idx;i<siz;i++){
        
        sub(s.substr(idx),i+1,siz);
    }
}
int main(){
    // vector<int>v={1,2,3,4,5};
    // stack<pair<int,int>>st;
string s="abc";
sub(s,0,s.size());


}
