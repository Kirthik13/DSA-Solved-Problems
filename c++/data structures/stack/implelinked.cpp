#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* link;
};

node* top;

void push(int x){
    node* temp=new node();
    temp->data=x;
    temp->link=NULL;
    if(top==NULL){
        top=temp;
        
    }
    else{
        node* A=top;
         while(A->link!=NULL){

           A=A->link;
         }
         A->link=temp;
         temp->link=NULL;
    }
    }
    int attop(){
        node* W=top;
        while(W->link!=NULL){
            W=W->link;
        }
        return W->data;
    }
    void print(){
        node* B=top;
        while(B!=NULL){
            cout<<B->data<<"  ";
            B=B->link;
        }
    }
    void pop(){
        node* C=top;
        while(C->link!=NULL){
            C=C->link;
        }
        node* D=top;
        while(D->link!=C){
            D=D->link;
        }
        D->link=NULL;
    }
    bool ispresent(){
if(top==NULL){
    return false;
}
else{
    return true;
}
    }


int main(){
    top=NULL;

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
  int as=attop();
  cout<<as<<endl;
    bool yy=ispresent();
if(yy==1){
    cout<<endl<<"true";
}
else{
    cout<<"false";
}

}