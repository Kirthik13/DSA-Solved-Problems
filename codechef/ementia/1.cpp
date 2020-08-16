    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        long long int t;cin>>t;
        while(t--){
    long long int n;
    cin>>n;
    vector< long long int>v;
    long long int P1,P2;
    for( long long int i=0;i<=n;i++){
        if(i==0){
            v.push_back(0);
        }
        else{
        long long int a;
        cin>>a;
        v.push_back(a);
        }
    }

    long long int sumP1=0;
    long long int sumP2=0;
    v[0]=0;
    if(v.size()==0){
        break;
    }
    for( long long int i=1;i<=n;i++){
    if(i&1 and i!=1 and i!=0){
            // cout<<"i1 : "<<i<<'\n';

 auto  x=max_element(v.begin(),v.end());  

       sumP2+=*x;
       v.erase(x);
    }
    else{
        if(i==2){
            // cout<<"i2 : "<<i<<'\n';
 auto x=max_element(v.begin(),v.end());  


       sumP2+=*x;
       v.erase(x);
        }
        else if(i!=2){
            // cout<<"i3 : "<<i<<'\n';
   auto x=max_element(v.begin(),v.end());  
       sumP1+=*x;
       v.erase(x);

        }  

    }
        


    }
    // cout<<"sumP1 : "<<sumP1<<" sumP2 : "<<sumP2<<'\n';
        

    if(sumP2==sumP1){
        cout<<"draw"<<'\n';
    }
    else if(sumP1>sumP2){
        cout<<"first"<<'\n';
    }
    else if(sumP2>sumP1){
        cout<<"second"<<'\n';

    }

    }
    return 0;
    }