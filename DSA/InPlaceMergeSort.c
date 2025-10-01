// In-place Merge Sort in C

#include <stdio.h>

// Function to merge two sorted subarrays in-place
// First subarray is arr[start..mid]
// Second subarray is arr[mid+1..end]
void merge(int arr[], int start, int mid, int end) {
    int start2 = mid + 1;

    // If the two subarrays are already in order, no need to merge
    if (arr[mid] <= arr[start2]) {
        return;
    }

    // Compare elements from both subarrays and shift as needed
    while (start <= mid && start2 <= end) {

        // If element at start is already in correct position
        if (arr[start] <= arr[start2]) {
            start++;
        } else {
            int value = arr[start2];
            int index = start2;

            // Shift all elements between start and start2 to the right by 1
            while (index != start) {
                arr[index] = arr[index - 1];
                index--;
            }

            // Place the element at the correct position
            arr[start] = value;

            // Update all pointers
            start++;
            mid++;
            start2++;
        }
    }
}

// Recursive function to implement in-place merge sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2; // Middle index to divide array

        // Sort first half
        mergeSort(arr, l, m);

        // Sort second half
        mergeSort(arr, m + 1, r);

        // Merge the two sorted halves
        merge(arr, l, m, r);
    }
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    // Example array
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    // Apply in-place merge sort
    mergeSort(arr, 0, n - 1);

    printf("Sorted array:   ");
    printArray(arr, n);

    return 0;
}

/* Step-by-step explanation:

1. Initial array: {12, 11, 13, 5, 6, 7}

2. First recursive split:
   - Left half: {12, 11, 13}
   - Right half: {5, 6, 7}

3. Sorting left half {12, 11, 13}:
   - Split into {12, 11} and {13}
   - Merge {12, 11} -> {11, 12}
   - Merge {11, 12} and {13} -> {11, 12, 13}

4. Sorting right half {5, 6, 7}:
   - Already sorted, merge does nothing

5. Final merge of {11, 12, 13} and {5, 6, 7}:
   - Compare 11 and 5 -> shift elements -> place 5
   - Compare 11 and 6 -> shift -> place 6
   - Compare 11 and 7 -> shift -> place 7
   - Resulting array: {5, 6, 7, 11, 12, 13}

Sorted array: {5, 6, 7, 11, 12, 13}
*/
