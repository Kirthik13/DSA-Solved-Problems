import java.util.Scanner;

public class qn2{
        public static void main(String[] args){
                Scanner input=new Scanner(System.in);
                int id;
                System.out.print("ENTER THE EMPLOYEE ID FOR OBJECT 1 : ");
                id=input.nextInt();
                System.out.println("ENTER THE FIRST NAME AND LAST NAME FOR THE OBJECT 1 : ");
                String dummy=input.nextLine();
                String fn=input.nextLine();
                String ln=input.nextLine();

                Employee E1=new Employee(id,fn,ln);
                Employee E2=new Employee();

                System.out.println("THE OBJECT E1 IS");
                E1.display();
                System.out.println("THE OBJECT E2 CREATED USING DEFAULT CONSTRUCTOR IS : ");
                E2.display();

                System.out.println("ENTER THE ID,FIRSTNAME AND LASTNAME TO SET THE OBJECT E2 : ");
                id=input.nextInt();
                dummy=input.nextLine();
                fn=input.nextLine();
                ln=input.nextLine();

                E2.setEmpid(id);
                E2.setFirstName(fn);
                E2.setLastName(ln);

                System.out.println("THE OBJECT E2 IS : ");
                System.out.println(E2.toString());
        }
}