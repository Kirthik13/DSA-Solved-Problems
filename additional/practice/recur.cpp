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
// void print(vector<int>v,int n){
//     if(n==-1){
//         return ;
//     }
// cout<<v[n]<<" ";
// print(v,n-1);

// // print(v,n-1);
// cout<<v[n]<<" ";

// // return ;
// }
// int main(){
// vector<int>v={1,2,3,4,5};
// int n=4;
// print(v,n);
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
// tower of hanoi
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
//max of array
// #include<bits/stdc++.h>
// using namespace std;
// int print(vector<int>v,int n){
//     if(n==v.size()-1){
//         return v[n];
//     }

// int m=print(v,n+1);
// if(m>v[n]){
//     return m;
// }
// else return v[n];
// }
// int main(){
//     int n;
// vector<int>v={1123,2,3,4,32};n=0;

// int m=print(v,n);cout<<m;
// }

//first index occurence of a element 

// #include<bits/stdc++.h>
// using namespace std;
// int occ(vector<int>v,int n,int x){
// if(n==-1){
//     return n;
// }
// if(v[n]==x){
//     return n;
// }
// else{
// int fo=occ(v,n-1,x);
//     return fo;
// }
// }
// int main(){
// vector<int>v={2,3456,732,2,56,82,90,23,82};
// int n=v.size()-1;
// int x;
// cin>>x;
// int k=occ(v,n,x);
// cout<<k;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int occ(vector<int>v,int n,int x){
// if(n==v.size()){
//     return -1;
// }
// int fo=occ(v,n+1,x);
// if(fo==-1){
//     if(v[n]==x){
//         return n;
//     }
//     else{
//         return -1;
//     }
// }
// else{
//     return fo;
// }

// }
// int main(){
// vector<int>v={2,3456,732,2,56,82,90,23,82};
// int n=0;
// int x;
// cin>>x;
// int k=occ(v,n,x);
// cout<<k;
// }

//atarget sum subsets
#include<bits/stdc++.h>
using namespace std;
deque<int> occ(deque<int>v,int n,int x ){
    if(n==v.size()){
    return {};
}
deque<int>res=occ(v,n+1,x);
if(res.size()==0){
    if(v[n]==x){
        res.push_front(n);
        return res;
    }
    else{
        return {};
    }
}
else{
    if(v[n]==x){
        res.push_front(n);

    return res;
    }
}
return res;
}
int main(){
deque<int>v={2,3,5,7,3,1,3,2,4,6,7,3};
int n=0;
int x;
cin>>x;
deque<int>res=occ(v,n,x);
for(auto i:res){
    cout<<i<<" ";
}
}