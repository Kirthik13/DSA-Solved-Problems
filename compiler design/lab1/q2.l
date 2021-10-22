%{
int blanks=0;
%}
%%
[ ] ++blanks;
\n return 0;
.
%%
int yywrap(){}
int main(){
        yylex();                                                                                                                                                      
        printf("No of blank spaces :- %d\n",blanks);
        return 0;
}