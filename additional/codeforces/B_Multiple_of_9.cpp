
  #include<bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

 string n;
  cin>>n;
  long long int res=0;
  long long int res1=0;
cout<<fixed<<setprecision(15);
  for(int i=0;i<n.length();i++){
      res1+=n[i] - 48;
		
      
  }
  if(res1%9==0 ){
      cout<<"Yes\n";
  }
  else{
      cout<<"No\n";
  }
    return 0;
}
