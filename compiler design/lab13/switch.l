%option noyywrap                                                                                                                                                               
%{                                                                                                                                                                             
        #include <stdio.h>                                                                                                                                                     
        #include <stdlib.h>                                                                                                                                                    
        #include "y.tab.h"                                                                                                                                                     
%}                                                                                                                                                                             
                                                                                                                                                                               
alpha [a-zA-Z]                                                                                                                                                                 
digit [0-9]+                                                                                                                                                                   
                                                                                                                                                                               
%%                                                                                                                                                                             
                                                                                                                                                                               
[ \t\n] ;                                                                                                                                                                      
                                                                                                                                                                               
"switch" {return SWITCH;}                                                                                                                                                      
                                                                                                                                                                               
"case" {return CASE;}                                                                                                                                                          
                                                                                                                                                                               
"default" { return DEFAULT;}                                                                                                                                                   
                                                                                                                                                                               
"break" { return BREAK;}                                                                                                                                                       
                                                                                                                                                                               
{alpha}({alpha}|{digit})* { return IDENTIFIER;}                                                                                                                                
                                                                                                                                                                               
{digit} {return NUMBER;}                                                                                                                                                       
                                                                                                                                                                               
[']{alpha}['] { return CHAR;}                                                                                                                                                  
                                                                                                                                                                               
":" { return COLON;}                                                                                                                                                           
                                                                                                                                                                               
"++" { return INC;}                                                                                                                                                            
                                                                                                                                                                               
"--" { return DEC;}                                                                                                                                                            
                                                                                                                                                                               
. { return yytext[0];}                                                                                                                                                         
                                                                                                                                                                               
%%