#include <iostream>
#include<string>


using namespace std;

class Student{
private:
int age1;
string firstname1;
string lastname1;
int standard1;
public:
void set_age(int age){
    age1=age;
  
}
int get_age(){
    int a;
    a=age1;
    return a;
}
void set_firstname(string firstname){
    firstname1=firstname;
}
string get_firstname(){
    string b;
    b=firstname1;
    return b;
    }
void set_lastname(string lastname){
    lastname1=lastname;
}
string get_lastname(){
    string c;
    c=lastname1;
    return c;
    }
void set_standard(int standard){
    standard1=standard;
}
int get_standard(){
    int d;
    d=standard1;
    return d;}
void to_string(string i,string k,string l,string j){
    string result;
    
    result=i+","+k+","+l+","+j;
    cout<<result;
}
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_firstname(first_name);
    st.set_lastname(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_lastname() << ", " << st.get_firstname() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    int ab=st.get_age();
    string i=to_string(ab);
   string k= st.get_firstname();
 string l=  st.get_lastname() ;
    int bc=st.get_standard();
    string j=to_string(bc);
st.to_string(i,k,l,j);
    
    return 0;
}