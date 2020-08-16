#include<iostream>
using namespace std;

template <typename T>
T krte(T x,T y){
    if(x>y){
        return x;
    }
    else
    {
        return y;
    }
    
}
int main(){
    cout<< krte<float>(2.3,5.1)<<endl<<krte<char>('A','a');
    cout<< krte<int>(2,5);

}