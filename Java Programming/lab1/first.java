package lab1;

public class first {
public static void main(String[] args) {
    
    double req_commission = 30000; 
    double sales_amt=0,commission=0,balance=0;					
    do {	
        balance = 0;
        commission = 0;	
        sales_amt += 0.01;		

  
        if (sales_amt > 10000)
        {
            commission =  commission + (sales_amt - 10000) * 0.12;
            balance = sales_amt - 10000;
        }

        if (sales_amt > 5000)
        {
            balance -=balance - 5000;
            commission += (balance) * 0.10;
            
        }
        if (sales_amt > 0)
         {
                commission =  commission + balance * 0.08;
         }

      
    } while (commission < req_commission);

 
    System.out.printf("Minimum number of sales to generate in order to make Rs.30,000 is Rs.%.0f\n", sales_amt);
}
}
