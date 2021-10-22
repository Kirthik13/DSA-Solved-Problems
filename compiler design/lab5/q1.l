%{                                                                                                                                             
#include<stdio.h>                                                                                                                              
#include<math.h>                                                                                                                               
int a;                                                                                                                                         
int b;                                                                                                                                         
int flag=1;                                                                                                                                    
char c;                                                                                                                                        
void add();                                                                                                                                    
void sub();                                                                                                                                    
void mul();                                                                                                                                    
void divi();                                                                                                                                   
%}.                                                                                                                                            
%%                                                                                                                                             
[0-9]+ { if(flag){                                                                                                                             
                a=atof(yytext);                                                                                                                
                flag=0;                                                                                                                        
         }                                                                                                                                     
            else                                                                                                                               
                b=atof(yytext);                                                                                                                
}                                                                                                                                              
[+\-\*\/] {                                                                                                                                    
        c=yytext[0];                                                                                                                           
}                                                                                                                                              
\n {                                                                                                                                           
        if(c=='+'){                                                                                                                            
                printf("the equivalent expression for addition is : \n");                                                                      
                add();                                                                                                                         
                return 0;                                                                                                                      
        }                                                                                                                                      
        if(c=='-'){                                                                                                                            
                printf("the equivalent expression for subtraction is :\n");                                                                    
                sub();                                                                                                                         
                return 0;                                                                                                                      
        }                                                                                                                                      
        if(c=='*'){                                                                                                                            
                printf("the equivalent expression for multiplication is :\n");                                                                 
                mul();                                                                                                                         
                return 0;                                                                                                                      
        }                                                                                                                                      
        if(c=='/'){                                                                                                                            
                printf("the equivalent expression for division is : \n");                                                                      
                divi();                                                                                                                        
                return 0;                                                                                                                      
        }                                                                                                                                      
}                                                                                                                                              
%%                                                                                                                                             
int yywrap(){}                                                                                                                                 
int main(){                                                                                                                                    
        yylex();                                                                                                                               
}                                                                                                                                              
void add(){                                                                                                                                    
        while(b!=0){                                                                                                                           
                printf("+carry = a&b = %d&%d\n",a,b);                                                                                          
                unsigned carry=a&b;                                                                                                            
                printf("a= a^b = %d^%d\n",a,b);                                                                                                
                a=a^b;                                                                                                                         
                printf("b = carry<<1 = %d<<1\n",carry);                                                                                        
                b=carry<<1;                                                                                                                    
        }                                                                                                                                      
        printf("the sum is : %d\n",a);                                                                                                         
}                                                                                                                                              
void sub(){                                                                                                                                    
        while(b!=0){                                                                                                                           
                printf("borrow = (a)&b = (%d)&%d\n",a,b);                                                                                    
                int borrow=(~a)&b;                                                                                                             
                printf("a =a^b = %d^%d\n",a,b);                                                                                                
                a=a^b;                                                                                                                         
                printf("b = borrow<<1 = %d<<1\n",borrow);                                                                                      
                b=borrow<<1;                                                                                                                   
        }                                                                                                                                      
        printf("the difference is : %d\n",a);                                                                                                  
}                                                                                                                                              
void mul(){                                                                                                                                    
        printf("c = log2(b) = log2(%d)\n",b);                                                                                                  
        int c=0;                                                                                                                               
        while(b>1){                                                                                                                            
                b/=2;                                                                                                                          
                c++;                                                                                                                           
        }                                                                                                                                      
        printf("res = a<<c = %d<<%d\n",a,c);                                                                                                   
        int res=a<<c;                                                                                                                          
        printf("the product is : %d\n",res);                                                                                                   
}                                                                                                                                              
void divi(){                                                                                                                                   
        printf("c = log2(b) = log2(%d)\n",b);                                                                                                  
        int c=0;                                                                                                                               
        while(b>1){                                                                                                                            
                b/=2;                                                                                                                          
                c++;                                                                                                                           
        }                                                                                                                                      
        printf("res = a>>c = %d>>%d\n",a,c);                                                                                                   
        int res=a>>c;                                                                                                                          
        printf("the quotient is : %d\n",res);                                                                                                  
}