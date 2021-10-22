package lab1;

import java.util.Scanner;
public class third {
   public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      System.out.print("Enter your weight in kilogram: ");
      double weight = sc.nextDouble();
      System.out.print("Enter your height in meters: ");
      double height = sc.nextDouble();
      double BMI = weight / (height * height);
     
      System.out.println("\nThe Calculated Body Mass Index (BMI) is " + String.format("%.1f", BMI) + "kg/m2 \n");
      if(BMI < 18.5 )
      {
         System.out.println("Underweight: less than 18.5");
      }
      else if(BMI >=18.5 && BMI<=24.9){
         System.out.println("Normal: between 18.5 and 24.9");
         
      }
      else if(BMI>=25 && BMI <=29.9)
      {
         System.out.println("Overweight: between 25 and 29.9");
         
      }
      else if(BMI>=30)
      {
         System.out.println("Obese: 30 or greater");

      }
  
   }
}
