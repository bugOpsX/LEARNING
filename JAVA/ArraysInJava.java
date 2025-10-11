/**
 * Arrays in Java - Basic Operations and Examples
 * 
 * This program demonstrates the fundamental operations on arrays in Java:
 *  1. Declaration and Initialization
 *  2. Traversal (using for and for-each)
 *  3. Insertion
 *  4. Deletion (by shifting)
 *  5. Searching (Linear Search)
 *  6. Finding Maximum and Minimum
 * 
 * Arrays store elements of the same data type in contiguous memory locations.
 * Indexing starts from 0.
 * 
 * Author: Pradyumn Pratap Singh (Strange)
 * For: Hacktoberfest / Open Source Contribution
 */

public class ArraysInJava {

    /**
     * Prints all elements of an array.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    public static void printArray(int[] arr) {
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    /**
     * Inserts an element at a given position in the array.
     * Creates a new array of size n+1 and shifts elements.
     * 
     * Time Complexity: O(n) — as elements may need to be shifted
     * Space Complexity: O(n) — new array is created
     */
    public static int[] insertElement(int[] arr, int element, int position) {
        if (position < 0 || position > arr.length) {
            System.out.println("Invalid position!");
            return arr;
        }

        int[] newArr = new int[arr.length + 1];
        for (int i = 0, j = 0; i < newArr.length; i++) {
            if (i == position) {
                newArr[i] = element;
            } else {
                newArr[i] = arr[j++];
            }
        }
        return newArr;
    }

    /**
     * Deletes an element from a given position.
     * Elements are shifted left to fill the removed position.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(n) — new array is created
     */
    public static int[] deleteElement(int[] arr, int position) {
        if (position < 0 || position >= arr.length) {
            System.out.println("Invalid position!");
            return arr;
        }

        int[] newArr = new int[arr.length - 1];
        for (int i = 0, j = 0; i < arr.length; i++) {
            if (i != position) {
                newArr[j++] = arr[i];
            }
        }
        return newArr;
    }

    /**
     * Performs a linear search to find a given element in the array.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     * 
     * @return index of element if found, else -1
     */
    public static int linearSearch(int[] arr, int key) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == key)
                return i;
        }
        return -1;
    }

    /**
     * Finds the maximum and minimum element in the array.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    public static void findMinMax(int[] arr) {
        int max = arr[0], min = arr[0];
        for (int num : arr) {
            if (num > max) max = num;
            if (num < min) min = num;
        }
        System.out.println("Maximum: " + max);
        System.out.println("Minimum: " + min);
    }

    // ---------------- TEST CASES ----------------
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40, 50};

        System.out.print("Original Array: ");
        printArray(arr);

        System.out.println("\nAfter inserting 25 at position 2:");
        arr = insertElement(arr, 25, 2);
        printArray(arr);

        System.out.println("\nAfter deleting element at position 3:");
        arr = deleteElement(arr, 3);
        printArray(arr);

        int key = 40;
        int index = linearSearch(arr, key);
        System.out.println("\nElement " + key + " found at index: " + index);

        System.out.println("\nFinding Min and Max:");
        findMinMax(arr);
    }
}
