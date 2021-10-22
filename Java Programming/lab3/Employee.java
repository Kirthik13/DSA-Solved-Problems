public class Employee{
    int empid;
    String firstname;
    String lastname;
    double salary=1000;

    public Employee(){
            empid=0;
            firstname=null;
            lastname=null;
    }
    public Employee(int id,String fn,String ln){
            empid=id;
            firstname=fn;
            lastname=ln;
    }
    public void setEmpid(int id){
            if(id<=0)
                    System.out.println("ID CAN'T BE NEGATIVE !");
            else
                    empid=id;
    }
    public void setFirstName(String fn){
            if(fn==null)
                    System.out.println("FIRSTNAME CAN'T BE NULL !");
            else
                    firstname=fn;
    }
    public void setLastName(String ln){
            if(ln==null)
                    System.out.println("LASTNAME CAN'T BE NULL !");
            else
                    lastname=ln;
    }
    public int getEmpid(){
            return empid;
    }
    public String getFirstName(){
            return firstname;
    }
    public String getLastName(){
            return lastname;
    }
    public double getSalary(){
            return salary;                                                                                                                 
    }                                                                                                                                      
    public void display(){                                                                                                                 
            System.out.println("EMPLOYEE DETAILS");                                                                                        
            System.out.println("EMPLOYEE ID : "+this.getEmpid());                                                                          
            System.out.println("FIRST NAME : " + this.getFirstName());                                                                     
            System.out.println("LAST NAME : " + this.getLastName());                                                                       
            System.out.println("SALARY : " + this.getSalary());                                                                            
    }                                                                                                                                      
    public String toString(){                                                                                                              
            return String.format("\n THE EMPLOYEE ID IS %d AND FIRST NAME IS %s AND LAST NAME IS %s AND SALARY IS %f",empid,firstname,lastname,salary);                                                                                                                                   
    }                                                                                                                                      
}