// package lab2;

import java.util.Scanner;

public class first {
public static void main(String[] args) {
 int n;
 Scanner sc=new Scanner(System.in);
 System.out.print("Enter the number of e-mail addresses : ");  
//reading the number of elements from the that we want to enter  
n=sc.nextInt();  
//creates an array in the memory of length 10  
String[] arr = new String[n];  
System.out.println("Enter the e-mail addresses :  ");  
for(int i=0;i<n;i++)
{
    arr[i]=sc.nextLine();
}
int pf=0;
int st=0;
for(int i=0;i<n;i++)
{
    String s=arr[i];
    int a1=s.indexOf("student");
    int a2=s.indexOf("prof");

    if(a1<s.length())
    {
        st++;
    }
    else if(a2<s.length()){
        pf++;
    }

}
System.out.println("the number of student addresses : "+st+" and professor addresses : "+pf);
}
// }
