#include<iostream>
#include<string.h>
#define N 100
#define M 100
#define P 100
using namespace std;

int main(){
char a[N];
char b[M];
char result[P];
cout<<"input first string : "<<endl;
gets(a);
cout<<"input second string : "<<endl;
gets(b);
//gets ends with \0 and fgets ends with \n
int len1=strlen(a);
int len2=strlen(b);
cout<<"len1: "<<len1<<endl<<"len2: "<<len2<<endl;
int z=0;
int c=0;
int yy=0;
for(int i=0;a[i]!='\0';i++){
    c=0;
    for(int j=0;b[j]!='\0';j++){
 
            if(a[i]!=b[j]){
                
            c++;
            }
            
    }
    if(c==len2){
        
          result[z]=a[i];
                z++;
                
    }
 

}

int len3=strlen(result);
cout<<endl<<"len3 :"<<len3<<endl;

for(int i=0;i<len3;i++){
    for(int j=i+1;j<len3;j++){
        if(result[i]==result[j]){
            for(int k=j;k<len3;k++){
                result[k]=result[k+1];
            }
             len3--;
        }
         
      
    }



}
cout<<endl<<"len3 :"<<len3<<endl;

result[len3+1]='\0';
  
for(int i=0;result[i]!='\0';i++){
    cout<<result[i]<<" ";
}
}