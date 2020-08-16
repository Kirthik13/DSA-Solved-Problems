#include<bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		if(n < 31){
			cout<<"NO\n";
			continue;
		}
		if(n == 36 || n == 40 || n == 44){
			cout<<"YES\n6 10 15 "<<(n - 31)<<"\n";
			continue;
		}
		cout<<"YES\n6 10 14 "<<(n - 30)<<"\n";
	}
	return 0;
}