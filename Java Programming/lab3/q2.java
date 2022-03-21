import java.util.Scanner;

public class q2{                                                                                                                                              
    public static void main(String args[]){                                                                                                                         
            Scanner input = new Scanner(System.in);                                                                                                                 
            int choice, id;                                                                                                                                         
            String fn, ln;                                                                                                                                          
            Employees e = new Employees();                                                                                                                            
            while(true){                                                                                                                                            
                    System.out.printf("Operations:-\n1->Set method test\n2->Get method test\n3->Display\n4->Calculate bonus\n5->Exit\n");                           
                    choice = input.nextInt();                                                                                                                       
                    switch(choice){                                                                                                                                 
                            case 1:
                                    System.out.println("Enter employee Id, firstName, lastName:-");                                                                 
                                    id = input.nextInt();                                                                                                           
                                    input.nextLine();                                                                                                               
                                    fn = input.nextLine();                                                                                                          
                                    ln = input.nextLine();                                                                                                          
                                    e.setEmpId(id);                                                                                                                 
                                    e.setFirstName(fn);                                                                                                             
                                    e.setLastName(ln);                                                                                                              
                                    break;                                                                                                                          
                            case 2:                                                                                                                                 
                                    System.out.println("Employee Id : "+e.getEmpId());                                                                              
                                    System.out.println("FirstName : "+e.getFirstName());                                                                            
                                    System.out.println("LastName : "+e.getLastName());                                                                              
                                    System.out.println("Salary : "+e.getSalary());                                                                                  
                                    break;                                                                                                                          
                            case 3:                                                                                                                                 
                                    e.display();                                                                                                                    
                                    break;                                                                                                                          
                            case 4:                                                                                                                                 
                                    System.out.printf("Enter rate: ");                                                                                              
                                    int rate = input.nextInt();                                                                                                     
                                    System.out.println("Bonus = "+e.calculateBonus(rate));                                                                          
                                    break;                                                                                                                          
                            case 5:                                                                                                                                 
                                    System.out.println("Exited");                                                                                                   
                                    break;                                                                                                                          
                            default:                                                                                                                                
                                    System.out.println("Invalid operation");                                                                                        
                                    break;                                                                                                                          
                    }                                                                                                                                               
                    if(choice == 5)                                                                                                                                 
                            break;                                                                                                                                  
            }                                                                                                                                                       
    }                                                                                                                                                               
}