#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t,k,i,n,s1;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		vector<ll>a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a.rbegin(),a.rend());
		s1=0;
		for(i=0;i<=k;i++)
			s1+=a[i];
		cout<<s1<<endl;
 
	}
}