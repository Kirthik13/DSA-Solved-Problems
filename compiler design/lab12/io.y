%{                                                                                                                                                                      
#include<stdio.h>                                                                                                                                                       
#include<stdlib.h>                                                                                                                                                      
%}                                                                                                                                                                      
                                                                                                                                                                        
%token print                                                                                                                                                            
%token hifen                                                                                                                                                            
%token s                                                                                                                                                                
%token coma                                                                                                                                                             
%token var                                                                                                                                                              
%token sc                                                                                                                                                               
                                                                                                                                                                        
%%                                                                                                                                                                      
                                                                                                                                                                        
line: print stmt post sc {if($4 == 1){printf("Correct\n");}                                                                                                             
                                        else printf("Incorrect\n");                                                                                                     
                                        return 0;}                                                                                                                      
    ;                                                                                                                                                                   
                                                                                                                                                                        
                                                                                                                                                                        
stmt: hifen var|hifen s|stmt s|stmt var|stmt hifen                                                                                                                      
    ;                                                                                                                                                                   
                                                                                                                                                                        
post: coma var|post post                                                                                                                                                
    ;                                                                                                                                                                   
                                                                                                                                                                        
%%                                                                                                                                                                      
                                                                                                                                                                        
void yyerror(const char *str){                                                                                                                                          

      printf("error : %s\n", str);                                                                                                                                      
}                                                                                                                                                                       
                                                                                                                                                                        

                                                                                                                                                                        
int yywrap(){                                                                                                                                                           
return 1;                                                                                                                                                               
}                                                                                                                                                                       

void main(){                                                                                                                                                            
yyparse();                                                                                                                                                              
}