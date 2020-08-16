#include<bits/stdc++.h>
using namespace std;




int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long int k;
        cin>>n;
        cin>>k;
        vector<long long int>l;

        for(int i=0;i<n;i++){
            long long int a;
            cin>>a;
            l.push_back(a);
        }
        map<int,int>m;
       long long int count=0;
       long long int count2=0;
        for(auto i=0;i<n;i++){
            int element=l[i];
            int ele1=l[i];
            count=0;
            if(k%element==0){
            while(ele1<k ){
                ele1+=element;
                count++;    
            }
            m.emplace(element,count);
            }
            else{
                count2++;
            }
            
        }

     
        
       if(count2==l.size()){
           cout<<"-1"<<'\n';
           continue;
       }
       else{
        auto x = min_element(m.begin(), m.end(),
    [](const pair< int,int>& p1, const pair< int, int>& p2) {
        return p1.second < p2.second; });
        
        cout<<x->first<<'\n';
       
       }
 }
   
}
    
