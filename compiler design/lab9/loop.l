%{                                                                                                                                             
#include<stdio.h>                                                                                                                              
#include<string.h>                                                                                                                             
char ans[500]="";                                                                                                                              
char a1[50]="";                                                                                                                                
char a2[50]="";                                                                                                                                
char a3[50]="";                                                                                                                                
int i=0;                                                                                                                                       
%}                                                                                                                                             
                                                                                                                                               
%%                                                                                                                                             
                                                                                                                                               
"for(" {                                                                                                                                       
        i=1;                                                                                                                                   
}                                                                                                                                              
                                                                                                                                               
[a-zA-Z0-9\;\,\&\)\ \=\(\<\>\"\[\]\+\-\!] {                                                                                                    
        if(i==1){                                                                                                                              
                strcat(a1,yytext);                                                                                                             
                if(yytext[0]==';')                                                                                                             
                        i=2;                                                                                                                   
        }                                                                                                                                      
        else if(i==2){                                                                                                                         
                if(yytext[0]==';')                                                                                                             
                        i=3;                                                                                                                   
                else                                                                                                                           
                        strcat(a2,yytext);                                                                                                     
        }                                                                                                                                      
        else if(i==3){                                                                                                                         
                if(yytext[0]==')'){                                                                                                            
                        strcat(a3,";");                                                                                                        
                        i=0;                                                                                                                   
                }                                                                                                                              
                else if(yytext[0]==',')                                                                                                        
                        strcat(a3,";\n\t");                                                                                                    
                else                                                                                                                           
                        strcat(a3,yytext);                                                                                                     
        }                                                                                                                                      
        else{                                                                                                                                  
                strcat(ans,yytext);                                                                                                            
        }                                                                                                                                      
}                                                                                                                                              
                                                                                                                                               
"{" {                                                                                                                                          
        //strcat(ans,"\t");                                                                                                                    
}                                                                                                                                              
"\n}" {}                                                                                                                                       
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
        printf("%s",ans);                                                                                                                      
        printf("\t%s",a3);                                                                                                                     
        printf("\n\tgoto label;\n}\n");                                                                                                        
        return 0;                                                                                                                              
}