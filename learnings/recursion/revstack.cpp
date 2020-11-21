// #include<bits/stdc++.h>
// using namespace std;
// stack<int>q;
// void ins(stack<int>& s,stack<int>& q){
//     if(q.empty()){
//         return;
//     }
//     int u=q.top();
// q.pop();
// ins(s,q);
// s.push(u);
// //    q.pop();
// }
// void del(stack<int>& s){
//    if(s.empty()){
//        return;
//    }
//    int m=s.top();
//    s.pop();
// //    ins(s,m);
// q.push(m);
//    del(s);
//    ins(s,q);

// }
// int main(){
//     stack<int>s;
//     s.push(5);
//     s.push(4);
//     s.push(3);
//     s.push(2);
//     s.push(1);
// //    while(s.size()!=0){
// //        cout<<s.top()<<'\n';
// //        s.pop();

// //    }
//     del(s);
//    while(s.size()!=0){
//        cout<<s.top()<<'\n';
//        s.pop();

//    }
// }


// without using extra space

#include<bits/stdc++.h>
using namespace std;
void ins(stack<int>& s,int m){
    if(s.empty()){
        s.push(m);
        return;
    }
    int k=s.top();
    s.pop();
    ins(s,m);
    s.push(k);
}
void rev(stack<int>& s){
    if(s.size()==1){
        return;
    }
    int m=s.top();
    s.pop();
    rev(s);
    ins(s,m);
    // s.push(m);
}
int main(){
    stack<int>s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    rev(s);
      while(s.size()!=0){
       cout<<s.top()<<'\n';
       s.pop();

   }

}