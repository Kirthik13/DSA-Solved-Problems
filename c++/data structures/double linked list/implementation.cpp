#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
};
node* head;
void insert(int x){

    node* temp=new node();
    temp->data=x;
    temp->prev=NULL;
    temp->next=NULL;
   node* S=head;
    if(head==NULL){
        temp->prev=NULL;
        temp->next=NULL;
        head=temp;
    }
    else{
         node* A=head;
        while(A->next!=NULL){
        
        A=A->next;
       
        }
         temp->prev=A;
        A->next=temp;
        temp->next=NULL;
    }
  
}
void print(){
   node* B=head;
   cout<<"the list is :"<<endl;
while(B!=NULL){
    cout<<B->data<<" ";
    B=B->next;
}
cout<<endl;
}
void revprint(){
  node* K=head;
  
    
while(K->next!=NULL){
  
    K=K->next;
}


cout<<"this is reverse print : "<<endl;
while(K!=NULL){
cout<<K->data<<" ";
K=K->prev;
}

}

int main(){
head=NULL;
int x;
int nos;
cout<<"enter the nos : "<<endl;
cin>>nos;
cout<<"enter the no to be inserted: "<<endl;
for(int i=0;i<nos;i++){
    cin>>x;
   insert(x);

}
print();
revprint();
 

}