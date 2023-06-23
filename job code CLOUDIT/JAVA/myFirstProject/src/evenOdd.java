import java.util.*;  
public class evenOdd {
    public static void function1(){
    int n;
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter number- ");  
    n = sc.nextInt();  
    if(n%2 == 0)
    System.out.println("even");
    else
    System.out.println("odd");
    }


    
   public static void main(String[] args) {
    function1();
   } 
}
