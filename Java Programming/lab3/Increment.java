import java.util.Scanner;
public class Increment{
        public static void main(String[] arg){
                Scanner cin = new Scanner(System.in);
                int x,y,n;
                System.out.print("ENTER THE NUMERATOR AND DENOMINATOR : ");
                x=cin.nextInt();
                y=cin.nextInt();
                Rationals r = new Rationals(x,y);
                r.display();
                System.out.print("ENTER THE VALUE BY WHICH THE NUMERATOR AND DENOMINATOR IS GOING TO INCREMENTED : ");
                n=cin.nextInt();
                r.increment(n);
                r.display();
        }
}
