#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;

    cin>>s;

vector<char>v2;




int count1=0;
int count2=0;
int count=0;
for(int i=0;i<s.size();i++){
    int a=s[i]-'a';
    count+=min(abs(count1-a),26-abs(count1-a));
    count1=a;
}
cout<<count;
}