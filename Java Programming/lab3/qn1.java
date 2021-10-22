import java.util.Scanner;

public class qn1{
        public static void main(String[] args){
                Scanner input=new Scanner(System.in);
                int num,deno;
                System.out.print("ENTER THE NUMERATOR AND DENOMINATOR FOR THE OBJECT 1 : ");
                num=input.nextInt();
                deno=input.nextInt();
                Rational r1=new Rational(num,deno);
                Rational r2=new Rational();
                System.out.println("THE OBJECT R1 IS ");
                r1.display();
                System.out.println("THE OBJECT R2 WHICH IS CREATED USING THE DEFAULT CONSTRUCTOR IS ");
                r2.display();
                System.out.print("ENTER THE NUMERATOR AND DENOMINATOR FOR SETTING THE OBJECT R2 : ");
                num=input.nextInt();
                deno=input.nextInt();
                r2.setnum(num);
                r2.setdenom(deno);
                System.out.println("NEW NUMERATOR AND DENOMINATOR OF R2 ARE " +r2.getnum()+ " AND " +r2.getdenom());
        }
}