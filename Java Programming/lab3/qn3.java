import java.util.Scanner;

public class qn3{
        public static void main(String[] args){
                Scanner input=new Scanner(System.in);
                System.out.print("ENTER THE NOS OF ELEMENTS IN THE ARRAY : ");

                int n=input.nextInt();
                Book[] array=new Book[n];

                for(int i=0;i<n;i++){
                        i++;
                        String dummy=input.nextLine();

                        System.out.printf("ENTER THE TITLE OF BOOK %d : ",i);
                        String t=input.nextLine();

                        System.out.printf("ENTER THE AUTHOR NAME OF BOOK %d : ",i);
                        String a=input.nextLine();

                        System.out.printf("ENTER THE YEAR OF PUBLICATION OF BOOK %d : ",i);
                        int y=input.nextInt();

                        System.out.printf("ENTER THE PRICE OF BOOK %d : ",i);
                        double p=input.nextDouble();

                        i--;
                        array[i]=new Book(t,a,y,p);
                }

                for(int i=0;i<n;i++){
                        System.out.printf("DETAILS OF BOOK %d : \n",i+1);
                        array[i].display();
                        System.out.println();
                }
        }
}