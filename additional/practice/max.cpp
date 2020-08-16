
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2132,12343,25354,120000};
    vector<int>::iterator it;

   for(auto i=v.begin()+2;i!=v.end();i++){
       it=i;
      max_element(v.begin(),it-1);
      cout<<*it;
      break;
   }
    
    return 0;
}
