#include <bits/stdc++.h> 
using namespace std; 
  
// Bitwise operator based function to check divisibility by 9 
bool isDivBy9(int n) 
{ 
   
    if (n == 0 || n == 9) 
        return true; 
    if (n < 9) 
        return false; 
  
   
    return isDivBy9((int)(n >> 3) - (int)(n & 7)); 
} 
  
// Driver program to test above function 
int main() 
{ 
    
   long long int j;
   cin>>j;
        if(isDivBy9(j)) 
            {
                cout << "Yes\n"; 
            }
            else{
                cout<<"No\n";
            }
    return 0; 
}