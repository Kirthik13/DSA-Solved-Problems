#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
 {
    //  ios_base::sync_with_stdio(false);
    //  cin.tie(NULL);
    //  cout.tie(NULL);

	// int t;
	// cin >> t;
	// while(t--)
	// {
	    int n;
	    cin >> n;
	    int i, count = 0, a[n];
	    for(i=0; i<n; i++)
	    {
	        cin >> a[i];
	    }
	    
	    sort(a, a+n);
	    
        for(i=n-1; i>1; i--)
        {
            int j = 0;
            int k = i-1;
            while(j<k)
            {
                if(a[j]+a[k] == a[i])
                {
                    cout<<"a[j] : "<<a[j]<<"  a[k] : "<<a[k]<<endl;
                    count++ ;
                    j++;
                    k--;
                    
                }
                else if(a[j]+a[k] < a[i])
                j++;
                else k--;
            }

        }
        (count!=0)?
        cout << count << endl:
        
        cout << -1 << endl;
	    
	   
	// }
	return 0;
}