#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    cout<<a.length()<<" "<<b.length()<<endl;
    
    string s1=a+b;
    cout<<s1<<endl;

  
           
          
  
    cout<<b.front()+a.substr(1,a.length()-1)<<" "<<a.front()+b.substr(1,b.length()-1);
 
     


    return 0;
}