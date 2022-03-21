#include<bits/stdc++.h>
using namespace std;
const int N=1000000;
    int primes[N];
int main()
{
    vector<int>pr;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(primes[i]==0)
        {
            pr.emplace_back(i);
            for(int j=i*i;j<=n;j+=i)
            {
                primes[j]=1;
            }
        }
        // primes[i]^=1;
    }

    for(auto i:pr)
    {
        cout<<i<<" ";
    }
}