#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    // cin.get();
    string p;
    cin>>s>>p;

    unordered_map<char,int>b1;
    unordered_map<char,int>a1;
    for(auto i=0;i<p.size();i++){
        b1[p[i]]++;

    }
    int cnt{};
    int res=INT_MAX;
    int curr,start{},start_idx{};
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        a1[ch]++;

        if(b1[ch]!=0 and a1[ch]<=b1[ch]){
            ++cnt;
        }
        if(cnt==p.size()){
        while(b1[s[start]]==0 or a1[s[start]]>b1[s[start]]){
            a1[s[start]]--;
            start++;
        }
        // cout<<"Start : "<<start<<endl;

        curr=i-start+1;
        cout<<"curr : "<<curr<<endl;
            if(res>curr){
                res=curr;
                start_idx=start;
            }
        }
        
    }
    cout<<s.substr(start_idx,res);
}