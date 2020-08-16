#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v{1,2,34,3,4,5,7,23,12};
bool check=false;
for(int i=2;i<v.size();i++){
    if(v[i]&1 and v[i-1]& 1 and v[i-2]&1){
        check=true;
    }
}

return 0;
}