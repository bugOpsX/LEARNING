import java.util.Scanner;

public class PrimeChecker {

    // Function to check if a number is prime
    public static boolean isPrime(int n) {
        // Handle edge cases
        if (n <= 1) {
            return false; // 0, 1, and negatives are not prime
        }
        if (n == 2) {
            return true;  // 2 is the smallest prime number
        }
        if (n % 2 == 0) {
            return false; // Even numbers > 2 are not prime
        }

        // Check divisibility up to √n
        for (int i = 3; i <= Math.sqrt(n); i += 2) {
            if (n % i == 0) {
                return false;
            }
        }

        return true; // If no divisors found, number is prime
    }

    // Main method
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input number from user
        System.out.print("Enter a number: ");
        int num = scanner.nextInt();

        // Check and display result
        if (isPrime(num)) {
            System.out.println(num + " is a prime number.");
        } else {
            System.out.println(num + " is not a prime number.");
        }

        scanner.close();
    }
}
