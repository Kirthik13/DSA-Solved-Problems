#include<iostream>
#include<stack>
using namespace std;

class node{
public:
    int data;
    node* link;
};
node* head;
stack<node*>S;
void insert(int x){
    node* temp=new node();

    temp->data=x;
  
    if(head==NULL){
        head=temp;
         temp->link=NULL;
 S.push(temp);
    }
    else{
        
            node* A=head;
     while(A->link!=NULL){
         temp->link=NULL;
         A->link=temp;
     
        

    }
     S.push(temp);

}}
void print(){
    cout<<"the list : "<<endl;
    node* B=S.top();
    head=B;
    S.pop();
    while(!(S.empty())){
        B->link=S.top();
       B=B->link;
        S.pop();

      
    }
    B->link=NULL;
    node* OP=head;
    while(OP!=NULL){
        cout<<OP->data<<" ";
        OP=OP->link;
    }
}
int main(){
    head=NULL;
    int x;
    int nos;
    cin>>nos;
    for(int i=0;i<nos;i++){
        cin>>x;
        insert(x);

    }
    print();

}