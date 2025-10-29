import java.util.Scanner;

public class PalindromeChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Take string input from user
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        // Normalize the string (ignore case and spaces)
        String normalized = input.replaceAll("\\s+", "").toLowerCase();

        // Reverse the string manually
        String reversed = "";
        for (int i = normalized.length() - 1; i >= 0; i--) {
            reversed += normalized.charAt(i);
        }

        // Check if palindrome
        if (normalized.equals(reversed)) {
            System.out.println("✅ The string is a palindrome.");
        } else {
            System.out.println("❌ The string is not a palindrome.");
        }

        scanner.close();
    }
}
