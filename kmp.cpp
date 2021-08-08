#include<bits/stdc++.h>
using namespace std;
void setlps( vector<int>&lps,string p){
  lps[0]=0;
  int len=0;
  int i=1;
  while(i<lps.size()){
      if(p[i]==p[len]){
          lps[i]=len+1;
          i++;
          len++;
      }
      else{
          if(len!=0){
              len=lps[len-1];
          }
          else{
              len=0;
              i++;
          }
      }
  }
}
int main(){
    string s="dabcjsdhfjhusdfdab";
    string p="dab";
    vector<int>lps(p.size(),0);
  int n=s.size();int m=p.size();
    setlps(lps,p);

    int i=0;
    int j=0;
    while(i<n){
        if(p[j]==s[i]){
            i++;
            j++;
        }
        else{
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i++;
            }
        }
        if(j==m){
            cout<<i-j<<endl;
            j=lps[j-1];
            // break;
        }
    }

}



