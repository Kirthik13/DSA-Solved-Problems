  #include<bits/stdc++.h>
    using namespace std;
    int main(){
   int t;
        cin>>t;
        while(t--){
    double pc,pr;
            cin>>pc>>pr;
            pc=ceil(pc/9);
            pr=ceil(pr/9);
            if(pr<=pc){
                cout<<"1"<<" "<<pr<<'\n';
              
            }
            else{
                cout<<"0"<<" "<<pc<<'\n';
            }
            // cout<<ceil(pr/9)<<" "<<ceil(pc/9);
        }
    }