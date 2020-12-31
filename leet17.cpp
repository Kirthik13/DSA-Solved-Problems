  #include<bits/stdc++.h>
  using namespace std;
  int main(){
      vector<int>A={-1,-1};


      vector<int>B={-1,1};
      vector<int>C={-1,1};
      vector<int>D={1,-1};
  map<int,int>ma;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++){
                int sum=A[i]+B[j];
                if(ma.find(sum)!=ma.end()){
                    ma[sum]++;
                }
                else{
                    ma[sum]=1;
                }
            }
        }
        // for(auto i:ma){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        int cnt{};
         for(int i=0;i<C.size();i++){
            for(int j=0;j<D.size();j++){
                int sum=(C[i]+D[j]);
                // cout<<sum<<endl;
                if(ma.find(-1*sum)!=ma.end()){
                    
                    cnt+=ma[-1*sum];
                }
               
            }
        }
        cout<<cnt<<endl;
  }