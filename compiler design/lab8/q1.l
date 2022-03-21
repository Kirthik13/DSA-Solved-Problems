%{                                                                                                                                                                      
        #include<stdio.h>                                                                                                                                               
        #include<string.h>                                                                                                                                              
        char ans[200]="",buf[20]="";                                                                                                                                    
        int flag=0;                                                                                                                                                     
%}                                                                                                                                                                      
                                                                                                                                                                        
%%                                                                                                                                                                      
                                                                                                                                                                        
"if(" {                                                                                                                                                                 
        printf("If found !\n");                                                                                                                                         
        flag=1;                                                                                                                                                         
        strcat(ans,"switch(");                                                                                                                                          
      }                                                                                                                                                                 
                                                                                                                                                                        
"else if(" {                                                                                                                                                            
                strcat(ans,"case ");                                                                                                                                    
                flag=3;                                                                                                                                                 
        }                                                                                                                                                               
                                                                                                                                                                        
"==" {                                                                                                                                                                  
        if(flag==1){                                                                                                                                                    
                strcat(ans,"){\ncase ");                                                                                                                                
                flag=2;                                                                                                                                                 
        }else{                                                                                                                                                          
                flag=2;                                                                                                                                                 
        }                                                                                                                                                               
     }                                                                                                                                                                  
                                                                                                                                                                        
"else{" {                                                                                                                                                               
                strcat(ans,"default :");                                                                                                                                
       }                                                                                                                                                                
"break;"                                                                                                                                                                
                                                                                                                                                                        
"}" strcat(ans,"break;\n");                                                                                                                                             
                                                                                                                                                                        
"){" strcat(ans,":");                                                                                                                                                   
                                                                                                                                                                        
. {                                                                                                                                                                     
        if(flag==1){                                                                                                                                                    
                strcat(buf,yytext);                                                                                                                                     
                strcat(ans,yytext);                                                                                                                                     
        }else if(flag==2){                                                                                                                                              
                strcat(ans,yytext);                                                                                                                                     
        }                                                                                                                                                               
  }                                                                                                                                                                     
                                                                                                                                                                        
"\n"                                                                                                                                                                    
                                                                                                                                                                        
%%                                                                                                                                                                      
                                                                                                                                                                        
int yywrap() {}                                                                                                                                                         
                                                                                                                                                                        
int main(int arg,char* argv[]){                                                                                                                                         
        if(arg>1){                                                                                                                                                      
                FILE* fp=fopen(argv[1],"r");                                                                                                                            
                if(fp)                                                                                                                                                  
                        yyin=fp;                                                                                                                                        
        }                                                                                                                                                               
        yylex();                                                                                                                                                        
        printf("Equivalent switch statment:\n %s}\n",ans);                                                                                                              
        return 0;                                                                                                                                                       
                                                                                                                                                                        
}