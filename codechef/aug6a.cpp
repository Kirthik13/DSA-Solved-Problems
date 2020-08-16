#include<bits/stdc++.h>
using namespace std;

void Combi(char a[], int reqLen, int s, int currLen, bool check[], int l,vector<int>v,
vector<vector<int>>v2)
{

   if(currLen > reqLen)
   return;
   else if (currLen == reqLen) {
      cout<<"\t";
      
      for (int i = 0; i < l; i++) {
         if (check[i] == true) {
            cout<<a[i]<<" ";
            v.push_back(a[i]);
         }
      }
      v2.push_back(v);
      v.clear();
      cout<<"\n";
      return;
   }
   if (s == l) {
      return;
   }
   check[s] = true;
   Combi(a, reqLen, s + 1, currLen + 1, check, l,v,v2);
   check[s] = false;
   Combi(a, reqLen, s + 1, currLen, check, l,v,v2);
}
int main() {
   int i,n;
   bool check[n];
   vector<int>v;
vector<vector<int>>v2;
   cout<<"Enter the number of element array have: ";
   cin>>n;
   char a[n];
   cout<<"\n";
   for(i = 0; i < n; i++) {
      cout<<"Enter "<<i+1<<" element: ";
      cin>>a[i];
      check[i] = false;
   }
   for(i = 1; i <= n; i++) {
      cout<<"\nThe all possible combination of length "<<i<<" for the given array set:\n";
      Combi(a, i, 0, 0, check, n,v,v2);
   }
   
   
for(auto i : v2)
  {
     for(auto j : i)
        cout << j <<" ";
     cout << "\n";
  }
   return 0;
}