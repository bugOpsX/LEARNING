import java.util.Scanner;

public class SimpleCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Taking two integers as input
        System.out.print("Enter the first number: ");
        int num1 = scanner.nextInt();

        System.out.print("Enter the second number: ");
        int num2 = scanner.nextInt();

        // Performing operations
        int addition = num1 + num2;
        int subtraction = num1 - num2;
        int multiplication = num1 * num2;

        // Display results
        System.out.println("\n=== Calculation Results ===");
        System.out.println("Addition: " + addition);
        System.out.println("Subtraction: " + subtraction);
        System.out.println("Multiplication: " + multiplication);

        // Handle division with try-catch
        try {
            double division = (double) num1 / num2;
            System.out.println("Division: " + division);
        } catch (ArithmeticException e) {
            System.out.println("Division: Error (Cannot divide by zero)");
        }

        System.out.println("===========================");
        System.out.println("Calculation complete.");

        scanner.close();
    }
}
