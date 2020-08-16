#include<iostream>
#include<sstream>
using namespace std;
class box{

private:
int a;
int b;
public:
box(){}
box(int a1,int b1){
    a=a1;
    b=b1;
}
friend class box1;
friend ostream& operator<<(ostream &out, const box &z);


};
class box1{

private:
int a;
int b;
public:
box1(){}
box1(int &a1,int &b1){
    a=a1;
    b=b1;
}





box operator+(box &x){
box res;
res.a=a+x.a;
res.b=b+x.b;
    //cout<< res.a<<" "<<res.b;

return res;
}
};

ostream& operator<<(ostream &out,const box &z){
    
 out<<z.a<<" "<<z.b;
   return out;
}


int main(){
int i,j,k,l;
cin>>i>>j>>k>>l;
box x(i,j);
box1 y(k,l);


box z=y+x;
cout<<z;
return 0;
}