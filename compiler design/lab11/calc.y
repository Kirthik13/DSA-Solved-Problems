%{
#include<stdio.h>
#include<stdlib.h>
%}
                                                                                                                                                                                                       
%token NAME NUMBER
%left '-' '+'
%left '*' '/'
%nonassoc UMINUS
                                                                                                                                                                                                       
%%                                                                                                                                                                                                     
statement: NAME '=' expression
                 | expression { printf ("= %d\n", $1) ; };
expression: expression '+' expression { $$ = $1 + $3;}
                  | expression '-' expression { $$ = $1 - $3;}
        | expression '*' expression { $$ = $1 * $3;}
        | expression '/' expression
        { if ($3 == 0)
                yyerror("divide by zero");                                                                                                                                                             
          else                                                                                                                                                                                         
                $$ = $1 / $3; }
        | '-' expression %prec UMINUS { $$ = -$2;}|
        | '(' expression ')' { $$ = $2;}
        | NUMBER { $$ = $1;} ;
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