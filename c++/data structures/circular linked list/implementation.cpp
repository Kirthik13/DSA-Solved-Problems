#include<iostream>
using namespace std;
class node{
public:
int data;
node* link;


};
node* head;
node* last;
void insert(int x){
    node* temp=new node();
    temp->data=x;
    if(last==NULL){
        temp->link=temp;
        last=temp;
        head=temp;
    }
    else{
        node* B=last;
        temp->link=B->link;
       B->link=temp;
        head=temp;
    }

}
void print(){
    node* A=head;
    node* D=last;

    do{
        cout<<A->data<<"  ";
        A=A->link;

    }while(A!=D->link);
    cout<<"\n";
}
int main(){
    head=NULL;
    
    last=NULL;
    int x,nos;
    cout<<"enter the nos : "<<endl;
    cin>>nos;
    cout<<"enter the numbers to be inserted: "<<endl;
    for (int i = 0; i < nos; i++)
    {
        cin>>x;
        insert(x);
        print();
        /* code */
    }
    
}