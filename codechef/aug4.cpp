#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        string s, p;
        cin>>s>>p;
        int pattern_size=p.size();
        int i=0;
        while (pattern_size--) {

            auto it=find(s.begin(), s.end(), p[i]);
            
            s.erase(it);
       
          
            i++;
        }
      
        sort(s.begin(), s.end());

        string s2=s;
        string s3=s;
        string s4=s;
        auto it=find(s.begin(),s.end(),p[0]);
        if(it!=s.end()){

        for (int i=0;i<s2.size();i++) {

            if (int(p[0])<int(s2[i])) {

                s2.insert(i, p);
                break;
            }
            else if (i==s2.size()-1)
            {
                s2.insert(s2.size(), p);
                break;
            }
        }
        for (int i=0;i<s3.size();i++) {
            if (int(p[0])<=int(s3[i])) {
                s3.insert(i, p);
                break;
            }
        }

        s=min(s2, s3);
        cout<<s<<'\n';
        }
        else{
          
            s4.push_back(p[0]);
            sort(s4.begin(),s4.end());
            auto z=find(s4.begin(),s4.end(),p[0]);
            int index = distance(s4.begin(), z);
        
            s4.insert(index+1,p,1,p.size());
            cout<<s4<<'\n';
        }

    }
}









