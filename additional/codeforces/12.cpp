#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n=0;
    cin>>n;
    if(1<=n && n<=pow(10.0,18.0)){
unordered_multiset<char>v;

string s=to_string(n);
for(int i=0;i<s.size();i++){
 char a=s[i];
    v.emplace(a);
}




int four=v.count('4');


int seven=v.count('7');


if(four+seven==7||four+seven==4)
{
    cout<<"YES";
}
else {
     cout<<"NO";
}
}
    else{
        exit(1);
    }
}