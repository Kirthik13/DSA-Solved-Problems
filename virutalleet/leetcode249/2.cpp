#include <bits/stdc++.h>
using namespace std;
set<string> st;
bool palin(string tem)
{
    int i = 0;
    int j = tem.size() - 1;
    while (i < j)
    {
        if (tem[i] != tem[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int cnt;
void gen(string s, string &tem, int idx)
{
    if (idx == s.size())
    {
        if (tem.size() == 3)
        {
            if (palin(tem))
            {
                cout << tem << endl;
                st.insert(tem);
            }
        }
        return;
    }

    gen(s, tem, idx + 1);
    tem.push_back(s[idx]);
    gen(s, tem, idx + 1);
    tem.pop_back();
}
int main()
{
    // string s="tlpjzdmtwderpkpmgoyrcxttiheassztncqvnfjeyxxp";

    string s="bbcbaba";
    // string s = "ckafnafqo";
    // string s="aabca";
    string tem;
    map<char, pair<int, vector<int>>> m;
    for (auto i = 0; i < s.size(); i++)
    {
        m[s[i]].first++;
        m[s[i]].second.push_back(i);
    }
    int cnt{};
    // for(auto i:m){
    // cout<<i.first<<" "<<i.second.first<<":"<<i.second.second<<endl;

    //   if(i.second.first>=2){
    //     //   cout<<i.first<<" "<<i.second<<endl;
    //     int tem=i.second.first;
    //       auto it=m.find(i.first);
    //       if(i.second.first==3){
    //       cnt++;
    //       }
    //       advance(it,1);
    //        for(;it!=m.end();it++){
    //            if(it->second.first==1 and it->second.second>tem){
    //     //    cout<<it->first<<" "<<it->second<<endl;
    //                cnt++;
    //            }
    //        }
    //    }
    // }

    set<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (m[s[i]].first >= 2 and st.find(s[i]) == st.end())
        {
             int fs=m[s[i]].second.front();
                int ls=m[s[i]].second.back();
                if(m[s[i]].second.size()>=3){
                    cnt++;
                }

            for (auto j : m)
            {
                // if(j.first=='f' and s[i]=='a'){
                //     cout<<m[s[i]].second<<":";
                //     cout<<j.second.second<<endl;
                // }
                
                if(j.first!=s[i]){
               
                    // cout<<fs<<" "<<ls<<endl;
                
                for (auto t : j.second.second)
                {
                //    cout<<j.first<<" ";
                    if (t <ls  and t > fs)
                    {
                        cout<<s[i]<<":"<<j.first<<endl;
                        // cout<<s[i]<<"==="<<j.first<<" "<<j.second.second<<":"<<m[s[i]].second<<endl;
                        cnt++;
                        break;
                    }
                }
            }
            }
        }
        st.insert(s[i]);
    }
    // // for(auto i:m){
    // //     cout<<i.first<<" "<<i.second<<endl;
    // // }
    cout << cnt << endl;
    // gen(s,tem,0);
    // for(auto i:st){
    //     cout<<i<<endl;
    // }
    // cout<<st.size();
}