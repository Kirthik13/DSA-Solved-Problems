#include<bits/stdc++.h>
// #define all(x) x.begin(),x.end()
#define all(x) x.begin(), x.end()

using namespace std;
int main(){
    vector<int>v={1,1,2,3,4,5};
    set<int>s(all(v));
    if(s.size()==1){
        // return 0;
        cout<<0<<endl;

    }
    int cnt{};
    // while(1){
    //     sort(v.rbegin(),v.rend());
    //     // int maxx=v[0];
    //     // cout<<"bef : "<<endl;
    //     // for(auto i:v){
    //     //     cout<<i<<" ";
    //     // }
    //     // cout<<endl;
    //     int minn;
    //     for(int i=1;i<v.size();i++){
    //         if(v[i]!=v[0]){

    //      minn=v[i];
    //      break;
    //         }
    //     }
    //     // auto it=min_element(all(v));
    //     // int idx=distance(v.begin(),it);
    //     v[0]=minn;
    //     cnt++;
    //     // cout<<"after : "<<endl;
    //     // for(auto i:v){
    //     //     cout<<i<<" ";
    //     // }
    //     // cout<<endl;
    //     // s.clear();
    //     set<int>st(all(v));
    //     if(st.size()==1){
    //         break;
    //     }
    // }
    
        sort(v.begin(),v.end());
        // auto it=min_element(all(v));
        // int idx=distance(v.begin(),it);
        int minn=v.front();
        // cout<<idx
        // v[0]=minn;
        int curr_ele=v[0];
        int        cntofsamele{};
        
        int befele{};

        for(int i=1;i<v.size();i++){
            if(v[i]!=minn){
                if(v[i]==curr_ele){
                    cntofsamele++;
                }
                else if(v[i]!=curr_ele){
                    cnt+=befele*cntofsamele;
              curr_ele=v[i];
              befele++;
              cntofsamele=1;
                }
                

            }
           

        }

    cnt+=befele*cntofsamele;
    cout<<cnt;
}