%{                                                                                                                                                                                         
        #include<stdio.h>                                                                                                                                                                  
        #include<string.h>                                                                                                                                                                 
        char class_buff[200]="",const_buff[200]="",cons[20]="";                                                                                                                            
        int flag=0,type=0;                                                                                                                                                                 
%}                                                                                                                                                                                         
%%                                                                                                                                                                                         
"struct " {                                                                                                                                                                                
                strcat(class_buff,"class ");                                                                                                                                               
                flag=1;                                                                                                                                                                    
          }                                                                                                                                                                                
[{] {                                                                                                                                                                                      
        flag=0;                                                                                                                                                                            
        strcat(cons,"(){");                                                                                                                                                                
        strcat(cons,"\0");                                                                                                                                                                 
        strcat(class_buff,"{");                                                                                                                                                            
  }                                                                                                                                                                                        
"int " {                                                                                                                                                                                   
                strcat(class_buff,"int ");                                                                                                                                                 
                type=1;                                                                                                                                                                    
      }                                                                                                                                                                                    
"float " {                                                                                                                                                                                 
                strcat(class_buff,"float ");                                                                                                                                               
      }                                                                                                                                                                                    

"char* " {                                                                                                                                                                                 
                strcat(class_buff,"char* ");                                                                                                                                               
                                                                                                                                                                                           
      }                                                                                                                                                                                    
[;] {                                                                                                                                                                                      
        strcat(class_buff,";");                                                                                                                                                            
                                                                                                                                                                                           
                strcat(const_buff,"=0;\n");                                                                                                                                                
        }else if(type==2){                                                                                                                                                                 
                strcat(const_buff,"=0.0;\n");                                                                                                                                              
        }else if(type==3){                                                                                                                                                                 
                strcat(const_buff,"=\"COMPILER DESIGN\";\n");                                                                                                                              
        }                                                                                                                                                                                  
  }                                                                                                                                                                                        

[}] return 0;                                                                                                                                                                              

. {                                                                                                                                                                                        
        if(flag==1){                                                                                                                                                                       
                strcat(class_buff,yytext);                                                                                                                                                 
                strcat(cons,yytext);                                                                                                                                                       
        }else{                                                                                                                                                                             
                strcat(class_buff,yytext);                                                                                                                                                 
                strcat(const_buff,yytext);                                                                                                                                                 
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
        printf("%s\n%s\n%s}\n}\n",class_buff,cons,const_buff);                                                                                                                             
}              