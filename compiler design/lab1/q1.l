%{
int vowels=0;
%}
%%
[aeiouAEIOU] ++vowels;
\n return 0;
.
%%
int yywrap(){}
int main(){
        yylex();                                                                                                                                                      
        printf("No of vowels in the word are :- %d\n",vowels);
        return 0;
}  