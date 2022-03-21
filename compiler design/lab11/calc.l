%option noyywrap                                                                                                                          
%{
#include<stdio.h>
#include "y.tab.h"
#include<stdlib.h>
extern int yylval;
%}
                                                                                                                                                                                                       
NUM [0-9]                                                                                                                                 
                                                                                                                                                                                                       
%%                                                                                                                                                                                                     
{NUM}+ {yylval = atoi(yytext); return NUMBER;}                                                                                                                                                         
[a-zA-Z][a-zA-Z0-9]* {return NAME;}                                                                                                                                                                    
[ \t] ;                                                                                                                                                                                                
\n return 0;                                                                                                                                                                                           
. return yytext[0];                                                                                                                                                                                    
%%