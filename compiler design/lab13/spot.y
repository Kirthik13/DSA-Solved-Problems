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
ST : IF'('COND')''{'ST1'}'ELSE '{'ST1'}' {printf("ST->IF(COND){ST1}ELSE{ST1}\n");}                                                                        
   | IF'('COND')''{'ST1'}' {printf("ST->IF(COND){ST1}\n");}                                                                                               
   ;                                                                                                                                                      
ST1 : ST {printf("ST1->ST\n");}                                                                                                                           
    |E {printf("ST1->E\n");}                                                                                                                              
    ;                                                                                                                                                     
E : ID'='E';' {printf("E->ID = E\n");}                                                                                                                    
  |E'+'E {printf("E->E + E\n");}                                                                                                                          
  |E'-'E {printf("E->E - E\n");}                                                                                                                          
  |E'*'E {printf("E->E * E\n");}                                                                                                                          
  |E'/'E {printf("E->E / E\n");}                                                                                                                          
  |E'<'E {printf("E->E < E\n");}                                                                                                                          
  |E'>'E {printf("E->E > E\n");}                                                                                                                          
  |E LE E {printf("E->E LE E\n");}                                                                                                                        
  |E GE E {printf("E->E GE E\n");}                                                                                                                        
  |E EQ E {printf("E->E EQ E\n");}                                                                                                                        
  |E NE E {printf("E->E NE E\n");}                                                                                                                        
  |E OR E {printf("E->E OR E\n");}                                                                                                                        
  |E AND E {printf("E->E AND E\n");}                                                                                                                      
  |ID {printf("E->ID\n");}                                                                                                                                
  |DIGIT {printf("E->DIGIT\n");}                                                                                                                          
  |E E {printf("E->E E\n");}                                                                                                                              
  ;                                                                                                                                                       
                                                                                                                                                          
COND : E'<'E {printf("COND->E < E\n");}                                                                                                                   
     |E'>'E {printf("COND->E > E\n");}                                                                                                                    
     |E LE E {printf("COND->E LE E\n");}                                                                                                                  
     |E GE E {printf("COND->E GE E\n");}                                                                                                                  
     |E EQ E {printf("COND->E EQ E\n");}                                                                                                                  
     |E NE E {printf("COND->E NE E\n");}                                                                                                                  
     |E OR E {printf("COND->E OR E\n");}                                                                                                                  
     |E AND E {printf("COND->E AND E\n");}                                                                                                                
     |ID {printf("COND->ID\n");}                                                                                                                          
     |DIGIT {printf("COND->DIGIT\n");}                                                                                                                    
     ;                                                                                                                                                    
%%                                                                                                                                                        
                                                                                                                                                          
#include "lex.yy.c"                                                                                                                                       
int yyerror( char *s ) { fprintf( stderr, "%s\n", s); }                                                                                                   
int main()                                                                                                                                                
{                                                                                                                                                         
        yyparse();                                                                                                                                        
        return 0;                                                                                                                                         
}