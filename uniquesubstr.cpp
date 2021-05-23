#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i{}, j{};
    int st{};
    int curr{};
    int res = INT_MIN;
    unordered_map<char, int> m;

    while (j < s.size())
    {
        if(m.find(s[j])!=m.end() and m[s[j]]>=i){
            i=m[s[j]]+1;
            m[s[j]]=j;
            curr=j-i;
        }
        m[s[j]]=j;
        curr++;
        j++;
        if(res<curr){
            res=curr;
            st=i;
        }
     


        }
        
    


    cout << s.substr(st, res);
}