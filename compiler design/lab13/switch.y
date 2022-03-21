%{                                                                                                                                                                             
        #include <stdio.h>                                                                                                                                                     
        #include <stdlib.h>                                                                                                                                                    
        int yylex();                                                                                                                                                           
        FILE * yyin;                                                                                                                                                           
        void yyerror(char * s){                                                                                                                                                
                fprintf(stderr,"%s\n","SWITCH syntax error\n");                                                                                                                
        }                                                                                                                                                                      
%}                                                                                                                                                                             
                                                                                                                                                                               
%token SWITCH CASE DEFAULT BREAK COLON IDENTIFIER NUMBER CHAR INC DEC                                                                                                          
                                                                                                                                                                               
%left '+' '-'                                                                                                                                                                  
                                                                                                                                                                               
%left '*' '/' '%'                                                                                                                                                              
                                                                                                                                                                               
%right INC DEC                                                                                                                                                                 
                                                                                                                                                                               
%left '!'                                                                                                                                                                      
                                                                                                                                                                               
%%                                                                                                                                                                             
                                                                                                                                                                               
PROGRAM : EXPR {printf("SWITCH accepted\n");};                                                                                                                                 
                                                                                                                                                                               
EXPR : SWITCHH '{' CASEE DEFAULTT'}' {printf("EXPR -> SWITCHH { CASEE DEFAULTT }\n");};                                                                                        
                                                                                                                                                                               
SWITCHH : SWITCH '(' E2 ')' {printf("SWITCHH -> SWITCH ( E2 )\n");} ;                                                                                                          
                                                                                                                                                                               
CASEE :CASEE CASE VALUE COLON BODY BREAKK {printf("CASEE -> CASEE CASE VALUE COLON BODY BREAKK\n");}                                                                           
                                                                                                                                                                               
      |;                                                                                                                                                                       
                                                                                                                                                                               
DEFAULTT : DEFAULT COLON BODY BREAKK {printf("DEFAULTT -> DEFAULT COLON BODY BREAKK\n");}                                                                                      
                                                                                                                                                                               
          |;                                                                                                                                                                   
                                                                                                                                                                               
BREAKK : BREAK ';' {printf("BREAKK -> BREAK ;\n");}                                                                                                                            
                                                                                                                                                                               
        |;                                                                                                                                                                     
                                                                                                                                                                               
E2 : VALUE {printf("E2 -> VALUE\n");}                                                                                                                                          
                                                                                                                                                                               
   | UPD {printf("E2 -> UPD\n");}                                                                                                                                              
                                                                                                                                                                               
   | E {printf("E2 -> E\n");};                                                                                                                                                 
                                                                                                                                                                               
E : E '+' E {printf("E -> E + E\n");}                                                                                                                                          
                                                                                                                                                                               
   | E '-' E {printf("E -> E - E\n");}                                                                                                                                         
                                                                                                                                                                               
   | E '*' E {printf("E -> E * E\n");}                                                                                                                                         
                                                                                                                                                                               
   | E '/' E {printf("E -> E / E\n");}                                                                                                                                         
                                                                                                                                                                               
   | E '%' E {printf("E -> E %% E\n");}                                                                                                                                        
                                                                                                                                                                               
   | NUMBER {printf("E -> NUM\n");}                                                                                                                                            
                                                                                                                                                                               
   | IDENTIFIER  {printf("E -> ID\n");};                                                                                                                                       
                                                                                                                                                                               
VALUE : NUMBER {printf("VALUE -> NUM\n");}                                                                                                                                     
                                                                                                                                                                               
      | CHAR {printf("VALUE -> CHAR\n");};                                                                                                                                     
                                                                                                                                                                               
BODY : BODY BODY { printf("BODY -> BODY BODY\n");}                                                                                                                             
                                                                                                                                                                               
     |IDENTIFIER '=' E2 ';' { printf("BODY -> id = E2\n");}                                                                                                                    
                                                                                                                                                                               
     |UPD ';'{ printf("BODY -> UPD ;\n");}                                                                                                                                     
                                                                                                                                                                               
     |;                                                                                                                                                                        
                                                                                                                                                                               
UPD :    IDENTIFIER INC  { printf("UPD -> ID ++\n");}                                                                                                                          
                                                                                                                                                                               
        | IDENTIFIER DEC  { printf("UPD -> ID --\n");}                                                                                                                         
                                                                                                                                                                               
        | INC IDENTIFIER  { printf("UPD -> ++ ID\n");}                                                                                                                         
                                                                                                                                                                               
        | DEC IDENTIFIER  { printf("UPD -> -- ID\n");}                                                                                                                         
                                                                                                                                                                               
%%                                                                                                                                                                             
                                                                                                                                                                               
int main(){                                                                                                                                                                    
                                                                                                                                                                               
        char filename[100];                                                                                                                                                    
        printf("FILENAME : ");                                                                                                                                                 
        scanf("%s",filename);                                                                                                                                                  
        FILE * fp = fopen(filename,"r");                                                                                                                                       
        if(fp != NULL){                                                                                                                                                        
        yyin = fp;                                                                                                                                                             
        yyparse();                                                                                                                                                             
        }                                                                                                                                                                      
        else{                                                                                                                                                                  
                printf("file not found\n");                                                                                                                                    
        }                                                                                                                                                                      
        return 0;                                                                                                                                                              
                                                                                                                                                                               
}