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
int size=0;
 size=(count%2!=0)?((count/2)+1):((count/2)+1);
    node *P=head;
node* prev;
cout<<"the size is :"<<size<<endl;
size=size-1;
    while(size--){
      
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