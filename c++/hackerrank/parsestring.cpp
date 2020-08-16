#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream a;
    string abc;
 a.str(str);
 abc=a.str();

 
char ch;
int b;
    
    
       vector<int>vv;
while(a>>b){

  vv.push_back(b);
 if(a.peek()==','){
a.ignore();
}
   
    }
      


   
  return vv;
}

   
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
