import java.util.*;
import java.math.BigInteger;

public class Fibonacci {
    public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     System.out.print("Enter N (number of terms): ");
        int n = sc.nextInt();

        if (n <= 0) {
            System.out.println("No terms to display.");
            return;
        }


        BigInteger a = BigInteger.ZERO;   // F0
        BigInteger b = BigInteger.ONE;    // F1


        StringBuilder out = new StringBuilder();

        for (int i = 1; i <= n; i++) {
        out.append(a);
        if(i < n) out.append(" ");
        BigInteger next = a.add(b); // next = a + b
        a = b;
        b = next;
        }

        System.out.println(out.toString());
    }
}
