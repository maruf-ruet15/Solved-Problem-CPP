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

// while loop
    public static void checkWhile(int i){
       i = 1;
       do{
        System.out.println("hello number" + " : "+i);
        i++;
       }while(i <= 5);
    }


    public static void checkfor() 
    {
       for(int i = 0 ; i <5 ; ++i){
        System.out.println("hello from for");
       } 
    }

   public static void main(String[] args) {
    function1();
    checkWhile(5);
    checkfor();
   } 
}
