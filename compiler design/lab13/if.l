%{                                                                                                                                                        
#include "y.tab.h"                                                                                                                                        
%}                                                                                                                                                        
                                                                                                                                                          
%option noyywrap                                                                                                                                          
                                                                                                                                                          
%%                                                                                                                                                        
[\t\n] {return 0;}                                                                                                                                        
if return IF;                                                                                                                                             
else return ELSE;                                                                                                                                         
[0-9]+ return DIGIT;                                                                                                                                      
[a-zA-Z][a-zA-Z0-9]* return ID;                                                                                                                           
"<=" return LE;                                                                                                                                           
">=" return GE;                                                                                                                                           
"==" return EQ;                                                                                                                                           
"!=" return NE;                                                                                                                                           
"||" return OR;                                                                                                                                           
"&&" return AND;                                                                                                                                          
. return yytext[0];                                                                                                                                       
%%