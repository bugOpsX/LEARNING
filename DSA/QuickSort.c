// Quick Sort in C

#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
// It places the pivot element at the correct position
// Elements smaller than pivot go to left, larger to right
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose last element as pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]); // Swap elements to move smaller to left
        }
    }
    swap(&arr[i + 1], &arr[high]); // Place pivot in correct position
    return i + 1;                  // Return pivot index
}

// Recursive Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array
        int pi = partition(arr, low, high);

        // Sort elements before pivot
        quickSort(arr, low, pi - 1);

        // Sort elements after pivot
        quickSort(arr, pi + 1, high);
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
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    // Apply Quick Sort
    quickSort(arr, 0, n - 1);

    printf("Sorted array:   ");
    printArray(arr, n);

    return 0;
}

/* Step-by-step explanation:

1. Initial array: {10, 7, 8, 9, 1, 5}

2. First call quickSort(arr, 0, 5):
   - pivot = arr[5] = 5
   - Partitioning: elements <=5 go left, others right
   - Array after partition: {1, 5, 8, 9, 10, 7}, pivot index = 1

3. Sort left part quickSort(arr, 0, 0):
   - Only one element, no action

4. Sort right part quickSort(arr, 2, 5):
   - pivot = arr[5] = 7
   - Partitioning: {1, 5, 7, 9, 10, 8}, pivot index = 2

5. Sort left part quickSort(arr, 2, 1):
   - No elements, return

6. Sort right part quickSort(arr, 3, 5):
   - pivot = arr[5] = 8
   - Partitioning: {1, 5, 7, 8, 10, 9}, pivot index = 3

7. Continue recursively until all subarrays are sorted
   - Final sorted array: {1, 5, 7, 8, 9, 10}

Quick Sort completed successfully!
*/
