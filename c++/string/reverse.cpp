

#include <iostream>
#include<string.h>
#define n 100
using namespace std;
int main()
{
    char a[n];
   gets(a);
   int b=0;
       for(int i=0;a[i]!='\0';i++){
      b++;
  }
  
 b=b-1;
 char y;
 int pp=0;
 cout<<"size: "<<b<<endl;
for(int i=0;a[i]!='\0';i++){
    if(pp!=b/2){
         y=a[i];
      
     
      a[i]=a[b-i];
      a[b-i]=y;
        pp++;
    
    }
    
    
  
    
}
for(int i=0;a[i]!='\0';i++){
  cout<<a[i]<<" ";
    }


  
  
 
     


    return 0;
}
