import java.util.Scanner;

public class SecondLargestFinder {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Take array size input
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();

        // Validate array size
        if (n < 2) {
            System.out.println("Array must have at least two elements.");
            return;
        }

        int[] arr = new int[n];

        // Input array elements
        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        // Initialize largest and second largest
        int largest = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;

        // Traverse the array
        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest;  // Update second largest
                largest = num;             // Update largest
            } else if (num > secondLargest && num != largest) {
                secondLargest = num;
            }
        }

        // Check if a valid second largest was found
        if (secondLargest == Integer.MIN_VALUE) {
            System.out.println("There is no distinct second largest element.");
        } else {
            System.out.println("Second largest element: " + secondLargest);
        }

        scanner.close();
    }
}
