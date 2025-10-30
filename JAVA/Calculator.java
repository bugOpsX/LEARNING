import java.util.Scanner;

public class ArithmeticOperations {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        int num1 = sc.nextInt();

        System.out.print("Enter the second number: ");
        int num2 = sc.nextInt();

        System.out.println("\n====== Arithmetic Operations Result ======");

        int addition = num1 + num2;
        System.out.println("Addition: " + num1 + " + " + num2 + " = " + addition);

        int subtraction = num1 - num2;
        System.out.println("Subtraction: " + num1 + " - " + num2 + " = " + subtraction);

        int multiplication = num1 * num2;
        System.out.println("Multiplication: " + num1 + " * " + num2 + " = " + multiplication);

        // Handle division inside try-catch to prevent runtime crash
        try {
            int division = num1 / num2;
            System.out.println("Division: " + num1 + " / " + num2 + " = " + division);
        } catch (ArithmeticException e) {
            System.out.println("Division: Error - Division by zero is not allowed.");
        } 
    }
}
