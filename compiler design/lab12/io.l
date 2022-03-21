%option noyywrap                                                                                                                                                        
%{                                                                                                                                                                      
#include<stdio.h>                                                                                                                                                       
#include "y.tab.h"                                                                                                                                                      
#include<stdlib.h>                                                                                                                                                      
extern int yylval;                                                                                                                                                      
int a=0,x=0;                                                                                                                                                            
%}                                                                                                                                                                      
                                                                                                                                                                        
%%                                                                                                                                                                      
                                                                                                                                                                        
"printf(" {return print;}                                                                                                                                               
"scanf(" return print;                                                                                                                                                  
                                                                                                                                                                        
["] {return hifen;}                                                                                                                                                     
                                                                                                                                                                        
"%"[a-z]+ {a++;return s;}                                                                                                                                               
                                                                                                                                                                        
"," {x++;return coma;}                                                                                                                                                  
                                                                                                                                                                        
[a-zA-Z][a-zA-Z0-9]* {return var;}                                                                                                                                      
                                                                                                                                                                        
");" {if(a==x) yylval=1;                                                                                                                                                
   else yylval=0;                                                                                                                                                       
                                                                                                                                                                        
   return sc;                                                                                                                                                           
  }                                                                                                                                                                     
                                                                                                                                                                        
.                                                                                                                                                                       
                                                                                                                                                                        
%%