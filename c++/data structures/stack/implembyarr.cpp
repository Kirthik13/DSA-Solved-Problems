#include<iostream>

#define n 100
using namespace std;
int a[n];
int top=-1;
void push(int x){
    
if(top==n-1){
    return;
}
a[++top]=x;

}   
void print(){
        for(int i=0;i<=top;i++){
        cout<<a[i]<<" ";
       
    }
}
void pop(){
    top--;
}
int attop(){
    return a[top];
}
bool ispre(){
 if(top>-1){
     return true;
 }
}
int main(){



  
    int nos,x;
    cout<<" how many nos u want to insert : "<<endl;
    cin>>nos;
    cout<<"enter the nos: ";
    for(int i=0;i<nos;i++)
  {
      cin>>x;
      push(x);
      
  }
  print();
  cout<<"how many u want to dele: "<<endl;
  int no;
  cin>>no;
     for(int i=0;i<no;i++)
  {
      
       pop();
      
  }

  cout<<endl;
  print();
  cout<<endl;
  int yo;
  yo=attop();
  cout<<endl<<yo;
  bool yy=ispre();
if(yy==1){
    cout<<endl<<"true";
}
   
}