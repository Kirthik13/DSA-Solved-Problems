
public class Rationals{
    int numerator;
    int denominator;

    public Rationals(){
            numerator=0;
            denominator=1;
    }
    public void increment(int n){
            this.numerator+=n;
            this.denominator+=n;
    }
    public Rationals(int n,int d){
            numerator=n;
            denominator=d;
    }
    public void set(int num,int den){
            this.numerator=num;           
            if(den!=0)              
                    this.denominator=den;   
    }
    public int getnum(){
            return numerator;
    }
    public int getden(){                                                                                                                                            
            return denominator;                                                                                                                                     
    }                                                                                                                                                               
    public void display(){                                                                                                                                          
            System.out.println("NUMERATOR = " + numerator);                                                                                                         
            System.out.println("DENOMINATOR = " + denominator);                                                                                                     
    }                                                                                                                                                               
}