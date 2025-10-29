import java.util.Scanner;

public class DivisionHandler {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            // Taking two integers as input
            System.out.print("Enter the numerator: ");
            int numerator = scanner.nextInt();

            System.out.print("Enter the denominator: ");
            int denominator = scanner.nextInt();

            // Performing division inside try block
            int result = numerator / denominator;

            System.out.println("Result: " + result);
        } 
        catch (ArithmeticException e) {
            // Handles division by zero
            System.out.println("Error: Division by zero is not allowed.");
        } 
        catch (Exception e) {
            // Handles any other unexpected exceptions
            System.out.println("An unexpected error occurred: " + e.getMessage());
        } 
        finally {
            // This block always executes
            System.out.println("Execution complete.");
            scanner.close();
        }
    }
}
