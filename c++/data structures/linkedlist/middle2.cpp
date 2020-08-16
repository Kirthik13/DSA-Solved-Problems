#include<iostream>
using namespace std;
class node{
public:
int data;
node* link;
};
node* head;
node* insert(int x){
node* temp=new node();
node* A=head;
temp->data=x;
temp->link=NULL;
if(head==NULL){
    head=temp;
}
else{
   
    temp->link=head;
    head=temp;

}
return head;
}
void print1(){
    node* U=head;
    cout<<"the list is : "<<endl;
    while(U!=NULL){
        cout<<U->data<<" ";
        U=U->link;
    }
    cout<<endl;
}
int print(node* B){
    
    int count=0;
    while(B!=NULL){
      
       count++;
       
        B=B->link;
      
    }

    node *P=head;
    int size=0;
    size=count/2;
    int c=0;


    while(c!=size){
      c++;
        P=P->link;
        
    }
   
  return  P->data;

}
int main(){ 
    head=NULL;
    int x;
    int nos;
    cout<<"no of nos: "<<endl;
    cin>>nos;
    cout<<"enter the no to insert: "<<endl;
    for(int i=0;i<nos;i++){
        cin>>x;
       head= insert(x);
         print1();

    }int z;
  z= print(head);
cout<<z;
}