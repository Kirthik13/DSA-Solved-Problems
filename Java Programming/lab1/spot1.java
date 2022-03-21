package lab1;

public class spot1 {
    
    public static void main(String args[]) {
        int num=1;
        System.out.println("The perfect numbers within 10,000 are : ");
        
        while(num<=10000)
        {
            int sum=0;
            int i=1;  

    while(i <= num/2)  
    {  
    if(num % i == 0)  
    {    
    sum = sum + i;  
    }  
    i++;  
    }
    if(sum==num)
    {
       
    System.out.println(num);


    }
 
    num++;
}

}
}
