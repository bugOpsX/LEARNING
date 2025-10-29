import java.util.Scanner;

public class DivisionHandler {
    public static void main(String[] args) {


        Scanner sc = new Scanner(System.in);

        System.out.print("Enter numerator: ");
        int a = sc.nextInt();

        System.out.print("Enter denominator: ");
        int b = sc.nextInt();

        try {
            // Try to perform the division operation
            int result = a / b;

            // If successful, print the result
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            // Catch block handles division by zero error
            System.out.println("Error: Division by zero is not allowed.");
        }

    }
}
