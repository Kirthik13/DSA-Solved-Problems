
    #include<iostream>
#include<math.h>

using namespace std;
void rec(int n,char sor ,char des,char hel){
    if(n==1){
        cout<< n <<" disk "<<sor<<" to "<<des<<endl;
        return;
    }
    rec(n-1,sor,hel,des);
     cout<< n <<" disk "<<sor<<" to "<< des<<endl;
    rec(n-1,hel,des,sor);


    
}
int main(){     
    int n=3;
  
    rec(n,'a','b','c');
}

