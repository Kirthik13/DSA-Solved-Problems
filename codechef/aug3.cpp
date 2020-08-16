    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    
    long long int t;
        cin>>t;
        while(t--){
        long long int pc,pr;
            cin>>pc>>pr;
       
            long long int count=0;
        long long int count1=0;
            long long int t=0;
            long long int t1=0;
         
    while(t!=pc){
        if(pc>0){
        if(pc-t>=10){
            t+=9;
            count++;
        }
        else if(pc-t<10){
            int a=pc-t;
            t+=a;
            count++;
        }
        }
    }
    while(t1!=pr){
        if(pr>0){
        if(pr-t1>=10){
            t1+=9;
            count1++;
        }
        else if(pr-t1<10){
            int b=pr-t1;
            t1+=b;
            count1++;
        }
        }
        
    }
    
            if(count==count1 ){
            
                cout<<'1'<<' '<<count<<'\n';
                continue;
            }
            else if(count>count1){
                cout<<'1'<<' '<<count1<<'\n';
                continue;
            }
            else if(count<count1){
                cout<<'0'<<' '<<count<<'\n';
            }

        }
    }