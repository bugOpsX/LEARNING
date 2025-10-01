// Merge Sort in C

#include <stdio.h>

// Function to merge two sorted subarrays into one sorted array
// First subarray is arr[l..m], second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1; // Size of first subarray
    int n2 = r - m;     // Size of second subarray

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temporary arrays back into arr[l..r]
    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements of R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Recursive Merge Sort function
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2; // Middle index

        // Sort first half
        mergeSort(arr, l, m);

        // Sort second half
        mergeSort(arr, m + 1, r);

        // Merge the sorted halves
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
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    // Apply Merge Sort
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
   - Split into {5, 6} and {7}
   - Merge {5, 6} -> {5, 6}
   - Merge {5, 6} and {7} -> {5, 6, 7}

5. Final merge of {11, 12, 13} and {5, 6, 7}:
   - Compare elements from both halves and merge
   - Resulting array: {5, 6, 7, 11, 12, 13}

Sorted array: {5, 6, 7, 11, 12, 13}
*/
