public class Book{
    String title;
    String authorName;
    int yearOfPublication;
    double price;

    public Book(){
            System.out.printf("DEFAULT CONSTRUCTOR OF BOOK HAS BEEN CALLED \n");
            title=null;
            authorName=null;
            yearOfPublication=0;
            price=0;
    }
    public Book(String t,String n,int y,double p){
            System.out.printf("PARAMETERISED CONSTRUCTOR OF BOOK HAS BEEN CALLED \n");
            title=t;
            authorName=n;
            yearOfPublication=y;
            price=p;
    }
    public void setTitle(String t){
            if(t==null)
                    System.out.println("THE TITLE CANNOT BE NULL ! ");
            else
                    title=t;
    }
    public void setAuthorName(String n){
            if(n==null)
                    System.out.println("THE AUTHOR NAME CANNOT BE NULL ! ");
            else
                    authorName=n;
    }
    public void setYearOfPublication(int y){
            if(y<=0)
                    System.out.println("THE YEAR CANNOT BE NEGATIVE OR ZERO !");
            else
                    yearOfPublication=y;
    }
    public void setPrice(double p){
            if(p<0)
                    System.out.println("THE PRICE CANNOT BE NEGATIVE ! ");
            else
                    price=p;
    }
    public String getTitle(){                                                                                                              
            return title;                                                                                                                  
    }                                                                                                                                      
    public String getAuthorName(){                                                                                                         
            return authorName;                                                                                                             
    }                                                                                                                                      
    public int getYearOfPublication(){                                                                                                     
            return yearOfPublication;                                                                                                      
    }                                                                                                                                      
    public double getPrice(){                                                                                                              
            return price;                                                                                                                  
    }                                                                                                                                      
    public void display(){                                                                                                                 
            System.out.printf("BOOK NAME : %s\n",this.getTitle());                                                                         
            System.out.printf("AUTHOR NAME: %s\n",this.getAuthorName());                                                                   
            System.out.printf("YEAR OF PUBLICATION : %d\n",this.getYearOfPublication());                                                   
            System.out.printf("PRICE : %f\n",this.getPrice());                                                                             
    }                                                                                                                                      
}