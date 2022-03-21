%{
        #include<stdio.h>
        #include "y.tab.h"
%}
                                                                                                                                                                                                       
%%
[0-9]+ { return NUM; }
"int" { return INT_DTYPE; }
"char" { return CHAR_DTYPE; }
"float" { return FLOAT_DTYPE; }
[a-zA-Z][a-zA-Z0-9]* { return VAR; }
"[" { return OP_B; }
"]" { return CL_B; }
" " { return SPACE; }
";" { return SMC; }
"," { return COMMA; }
. return yytext[0];
%%
                                                                                                                                                                                                       
int yywrap(){
        return 1;
}