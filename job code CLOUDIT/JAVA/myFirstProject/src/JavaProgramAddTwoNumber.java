import java.util.Scanner;

public class JavaProgramAddTwoNumber {
    public static void main(String[] args) {

        int num1, num2, sum;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter First Number: ");
            num1 = sc.nextInt();

            System.out.println("Enter Second Number: ");
            num2 = sc.nextInt();
            sum = num1 + num2;
            System.out.println("Sum of these numbers: " + sum);
        }
    }
}