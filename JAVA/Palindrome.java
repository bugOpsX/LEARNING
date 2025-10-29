import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = sc.nextLine();

        // Normalize (ignore case and spaces)
        String str = input.replaceAll("\\s+", "").toLowerCase();
        String reversed = new StringBuilder(str).reverse().toString();

        if (str.equals(reversed))
            System.out.println("✅ '" + input + "' is a palindrome.");
        else
            System.out.println("❌ '" + input + "' is not a palindrome.");
    }
}
