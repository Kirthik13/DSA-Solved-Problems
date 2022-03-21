%{                                                                                                                                                        
#include<stdio.h>                                                                                                                                         
#include<stdlib.h>                                                                                                                                        
#include<string.h>                                                                                                                                        
%}                                                                                                                                                        
                                                                                                                                                          
%token ID DIGIT IF ELSE LE GE NE OR AND EQ                                                                                                                
%left '='                                                                                                                                                 
%left AND OR                                                                                                                                              
%left '<' '>' LE GE NE EQ                                                                                                                                 
%left '+' '-'                                                                                                                                             
%left '*' '/'                                                                                                                                             
                                                                                                                                                          
%%                                                                                                                                                        
F : ST {printf("Input accepted\n");exit(0);}                                                                                                              
ST : IF'('COND')''{'ST1'}'ELSE '{'ST1'}'                                                                                                                  
   | IF'('COND')''{'ST1'}'                                                                                                                                
   ;                                                                                                                                                      
ST1 : ST                                                                                                                                                  
    |E                                                                                                                                                    
    ;                                                                                                                                                     
E : ID'='E';'                                                                                                                                             
  |E'+'E                                                                                                                                                  
  |E'-'E                                                                                                                                                  
  |E'*'E                                                                                                                                                  
  |E'/'E                                                                                                                                                  
  |E'<'E                                                                                                                                                  
  |E'>'E                                                                                                                                                  
  |E LE E                                                                                                                                                 
  |E GE E                                                                                                                                                 
  |E EQ E                                                                                                                                                 
  |E NE E                                                                                                                                                 
  |E OR E                                                                                                                                                 
  |E AND E                                                                                                                                                
  |ID                                                                                                                                                     
  |DIGIT                                                                                                                                                  
  |E E                                                                                                                                                    
  ;                                                                                                                                                       
                                                                                                                                                          
COND : E'<'E                                                                                                                                              
     |E'>'E                                                                                                                                               
     |E LE E                                                                                                                                              
     |E GE E                                                                                                                                              
     |E EQ E                                                                                                                                              
     |E NE E                                                                                                                                              
     |E OR E                                                                                                                                              
     |E AND E                                                                                                                                             
     |ID                                                                                                                                                  
     |DIGIT                                                                                                                                               
     ;                                                                                                                                                    
%%                                                                                                                                                        
                                                                                                                                                          
#include "lex.yy.c"                                                                                                                                       
int yyerror( char *s ) { fprintf( stderr, "%s\n", s); }                                                                                                   
int main()                                                                                                                                                
{                                                                                                                                                         
        yyparse();                                                                                                                                        
        return 0;                                                                                                                                         
}