#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    string res1="";
    string res2="";
    int j = s.size() - 1;
    int i = 0;
    while (i <= j)
    {
        if (s[i] == '(' and s[j] == ')')
        {
            res1 += s[i];
            res2 += s[j];
            i++;
            j--;
        }

        else if (s[i] == ')')
        {
            i++;
        }
        else if (s[j] == '(')
        {
            j--;
        }
        else if (s[i] != '(' and s[j] == ')')
        {
            res1 += s[i];
            i++;
        }
        else if (s[i] == '(' and s[j] != ')')
        {
            res2 += s[j];

            j--;
        }
        else
        {
            if(i==j){
                  res1 += s[i];
            // res2 += s[j];
            }
else{
            res1 += s[i];
            res2 += s[j];
}
            // if(s[j]=='o'){
            // cout<<res2<<endl;
            //     cout<<"ASd";
            // }
            i++;
            j--;
        }
    }
    // res2.pop_back();
    reverse(res2.begin(), res2.end());
    if(res1.size()==0 and res2.size()==0){
        cout<<" ";
    }
    cout << res1 + res2;
}