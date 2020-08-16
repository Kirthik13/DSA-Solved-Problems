#include<iostream>
#include<regex>
using namespace std;


int main(){

string a="abc";
regex b("krtsjifk*");
if(regex_match(a,b)){
  cout<<"match";
}
else{
  cout<<"nope";
}

}
