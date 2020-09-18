//sum of elements
// #include<bits/stdc++.h>
// using namespace std;
//     vector<int>v={1,-5};
// int sum(int n){

// if(n<0){
// return 0;
// }
// return v[n]+sum(n-1);
// }
// int main(){
//     int n=v.size()-1;

//     int k=0;
//     k=sum(n);
  
//    cout<<k;
    
// }
//print in dec and inc
// #include<bits/stdc++.h>
// using namespace std;
// void print(int n){
//     if(n==5){
//         return ;
//     }
// cout<<n<<" ";
// print(n+1);

// // print(v,n-1);
// cout<<n<<" ";

// // return ;
// }
// int main(){
// // vector<int>v={1,2,3,4,5};
// int n=1;
// print(n);
// }
//factorial
// #include<bits/stdc++.h>
// using namespace std;
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     int fn1=fact(n-1);
//     int k=n*fn1;
//     return k;

// }
// int main(){
// int k=fact(5);
// cout<<k;
// }
//power
// #include<bits/stdc++.h>
// using namespace std;
// int pow(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     int p=pow(x,n-1);
//     int po=x*p;
//     return po;
// }
// int main()
// {
// int k=    pow(2,4);
// cout<<k;
 
// }
//power (logn) (best)
//  #include<bits/stdc++.h>
//  using namespace std;
//  int pow(int x,int n){
// if(n==0){
//     return 1;
// }
// int xpnb2=pow(x,n/2);
// int xn=xpnb2*xpnb2;

// if(n%2==1){

// xn=xn*x;
// }
// return xn;
//  }
//  int main(){
// int k=pow(2,4);
// cout<<k;
//  }
//print zig-zag
// #include<bits/stdc++.h> 
// using namespace std;
// void print(int n){
// if(n==0){
//     return ;
// }
// cout<<n<<" "; 
// print(n-1);
// cout<<n<<" "; 
// print(n-1);
// cout<<n<<endl; 


// }
// int main(){
// print(3);
// }
//tower of hanoi
// #include<bits/stdc++.h>
// using namespace std;
// void towerofhanoi(int n,int a,int b,int c){
//     if(n==0){
//         return;
//     }
//     towerofhanoi(n-1,a,c,b);
//     printf("%d [%d - %d]\n",n,a,b);
//     towerofhanoi(n-1,c,b,a);

// }
// int main(){
// towerofhanoi(3,1,2,3);
// }

#include<bits/stdc++.h>
using namespace std;
int print(vector<int>v,int n){
    if(n==v.size()-1){
        return v[n];
    }

int m=print(v,n+1);
if(m>v[n]){
    return m;
}
else return v[n];
}
int main(){
    int n;
vector<int>v={1123,2,3,4,32};n=0;

int m=print(v,n);cout<<m;
}
