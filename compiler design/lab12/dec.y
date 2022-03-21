%{
#include<stdio.h>
%}
                                                                                                                                                                                                       
%token NUM INT_DTYPE CHAR_DTYPE FLOAT_DTYPE VAR OP_B CL_B SPACE SMC COMMA;
                                                                                                                                                                                                       
%%
S : DT SPACE V SMC
        {printf("Input accepted\n");
        return 0;}
        ;
V : V COMMA V | VAR OP_B NUM CL_B | VAR;
DT : INT_DTYPE | CHAR_DTYPE | FLOAT_DTYPE;
                                                                                                                                                                                                       
%%
                                                                                                                                                                                                       
                                                                                                                                                                                                       
int main(){
        yyparse();                                                                                                                                                                                     
        return 0;
}                                                                                                                                                                                                      
                                                                                                                                                                                                       
int yyerror(){
        printf("Syntax error: Invalid variable declaration\n");
         return 1;
}