package lab1;
import java.util.*;  
public class second {
    public static void main(String[] args)   
    {  
        // Generate random number between 5 to 30  
        double a =   Math.floor(Math.random() * 5);  
        int a1=(int)a;
        int ch=0;
        do {
            Scanner sc= new Scanner(System.in);    //System.in is a standard input stream  
          
            System.out.print("Enter the number :- ");  
            int guessnum = sc.nextInt();  
            if(a1>guessnum)
            {
                System.out.println("The number is lesser"); 
            }
            else if(a1<guessnum)
            {

                System.out.println( "The number is greater"); 
            }
            else
            {
                System.out.println( "Congratulations, your guess is correct!"); 
                ch=1;
            }


            

            // code block to be executed
          }
          while (ch!=1);
        
        // Output is different every time this code is executed    
        // System.out.println(a1);  
        // System.out.println(b1);  
    }  
}
