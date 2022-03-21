#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>v={{2,1,5},{3,3,7}};

    int cap=5;
    // int dp[1000]={0};
    int f=0;
    // for(auto i:v)
    // {
    //     for(int j=i[1];j<i[2];j++)
    //     {
    //         dp[j]+=i[0];
    //         if(cap<dp[j])
    //         {
    //             cout<<"false";
    //             f=1;
    //             break;
    //         }
    //     }

    // }
    // if(f==0)
    // {
    //     cout<<"true"<<endl;

    // }





    // vector<pair<int,int>>tp;

    // for(auto i:v)
    // {
    //   tp.push_back({i[1],i[0]});
    //   tp.push_back({i[2],-i[0]});
    // }
    // sort(begin(tp),end(tp));

    // int filled{};

    // for(auto i:tp)
    // {
    //     filled+=i.second;
    //     if(filled>cap)
    //     {
    //         cout<<"false"<<endl;
    //         f=1;
    //         break;
    //     }
    // }
    // if(f==0)
    // {
    //     cout<<"true"<<endl;
    // }

    sort(begin(v),end(v),[](auto a,auto b){
        if(a[1]<b[1] or (a[1]==b[1] and a[2]<b[2])){
            return 1;
        }
        return 0;
    });

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    int filled=0;

    for(int i=0;i<v.size();i++)
    {
        if(pq.size()>0 and pq.top().first<=v[i][1])
        {
            filled-=pq.top().second;
            pq.pop();
        }

        pq.push({v[i][2],v[i][0]});
        filled+=v[i][0];

        if(filled>cap)
        {
            cout<<"false"<<endl;
            f=1;
            break;
        }

    }
    if(f==0)
    {
        cout<<"true"<<endl;
    }

}