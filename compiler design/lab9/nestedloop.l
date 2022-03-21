%{
#include<stdio.h>
#include<string.h>
char ans[500]="";                                                                                                                              
char a1[50]="";                                                                                                                                
char a2[50]="";                                                                                                                                
char a3[50]="";                                                                                                                                
char b1[50]="";                                                                                                                                
char b2[50]="";                                                                                                                                
char b3[50]="";                                                                                                                                
int i=0;                                                                                                                                       
int j=0;                                                                                                                                       
%}                                                                                                                                             
                                                                                                                                               
%%                                                                                                                                             
                                                                                                                                               
"for(" {                                                                                                                                       
        i=1;                                                                                                                                   
}                                                                                                                                              
                                                                                                                                               
[a-zA-Z0-9\;\,\&\)\ \=\(\<\>\"\[\]\+\-\!] {                                                                                                    
        if(i==1&&j==0){                                                                                                                        
                strcat(a1,yytext);                                                                                                             
                if(yytext[0]==';')                                                                                                             
                        i=2;                                                                                                                   
        }                                                                                                                                      
        else if(i==1&&j==1){                                                                                                                   
                strcat(b1,yytext);                                                                                                             
                if(yytext[0]==';')                                                                                                             
                        i=2;                                                                                                                   
        }                                                                                                                                      
        else if(i==2&&j==0){                                                                                                                   
                if(yytext[0]==';')                                                                                                             
                        i=3;                                                                                                                   
                else                                                                                                                           
                        strcat(a2,yytext);                                                                                                     
        }                                                                                                                                      
        else if(i==2&&j==1){                                                                                                                   
                if(yytext[0]==';')                                                                                                             
                        i=3;                                                                                                                   
                else                                                                                                                           
                        strcat(b2,yytext);                                                                                                     
        }                                                                                                                                      
        else if(i==3&&j==0){                                                                                                                   
                if(yytext[0]==')'){                                                                                                            
                        strcat(a3,";");                                                                                                        
                        j=1;                                                                                                                   
                        i=1;                                                                                                                   
                }                                                                                                                              
                else if(yytext[0]==',')                                                                                                        
                        strcat(a3,";\n\t");                                                                                                    
                else                                                                                                                           
                        strcat(a3,yytext);                                                                                                     
        }                                                                                                                                      
        else if(i==3&&j==1){                                                                                                                   
                if(yytext[0]==')'){                                                                                                            
                        strcat(b3,";");                                                                                                        
                        j=2;                                                                                                                   
                        i=4;                                                                                                                   
                }                                                                                                                              
                else if(yytext[0]==',')                                                                                                        
                        strcat(b3,";\n\t");                                                                                                    
                else                                                                                                                           
                        strcat(b3,yytext);                                                                                                     
        }                                                                                                                                      
        else if(i==0){                                                                                                                         
                strcat(ans,yytext);                                                                                                            
        }                                                                                                                                      
}                                                                                                                                              
                                                                                                                                               
"{" {                                                                                                                                          
        if(j==2)                                                                                                                               
                i=0;                                                                                                                           
}                                                                                                                                              
"\n}" {                                                                                                                                        
        if(j==2)                                                                                                                               
                i=4;                                                                                                                           
}                                                                                                                                              
"\n"|"\t" {                                                                                                                                    
        if(i==0)                                                                                                                               
                strcat(ans,yytext);                                                                                                            
}                                                                                                                                              
.                                                                                                                                              
                                                                                                                                               
%%                                                                                                                                             
                                                                                                                                               
int yywrap(){}                                                                                                                                 
                                                                                                                                               
int main(int argc,char* argv[]){                                                                                                               
        if(argc>1){                                                                                                                            
                FILE* fp=fopen(argv[1],"r");                                                                                                   
                if(fp)                                                                                                                         
                        yyin=fp;                                                                                                               
        }                                                                                                                                      
        yylex();
        printf("%s\n",a1);                                                                                                                     
        printf("label:");                                                                                                                      
        printf("\nif(%s){",a2);                                                                                                                
        printf("\n\t%s",b1);                                                                                                                   
        printf("\n\tlabel2:");                                                                                                                 
        printf("\n\tif(%s){",b2);                                                                                                              
        printf("%s",ans);                                                                                                                      
        printf("\t%s",b3);                                                                                                                     
        printf("\n\t\tgoto label2;\n\t}");                                                                                                     
        printf("\n\t%s",a3);                                                                                                                   
        printf("\n\tgoto label;\n}\n");                                                                                                        
        return 0;                                                                                                                              
}