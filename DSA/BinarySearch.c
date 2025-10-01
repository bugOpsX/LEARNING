// Binary Search in C

#include <stdio.h>

// Function to perform binary search on a sorted array
// Returns the index of the element if found, else -1
int binarySearch(int arr[], int size, int target) {
    int left = 0;             // Starting index
    int right = size - 1;     // Ending index

    while (left <= right) {
        int mid = left + (right - left) / 2; // Middle index

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Element found
        }

        // If target is greater, ignore left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    // Element is not present in array
    return -1;
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    // Example sorted array
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    printf("Array: ");
    printArray(arr, n);

    // Perform binary search
    int result = binarySearch(arr, n, target);

    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array\n", target);

    return 0;
}

/* Step-by-step explanation:

1. Initial array: {2, 4, 6, 8, 10, 12, 14}
   Target element: 10

2. First iteration:
   - left = 0, right = 6
   - mid = 0 + (6-0)/2 = 3
   - arr[3] = 8
   - 8 < 10 -> search right half
   - left = mid + 1 = 4

3. Second iteration:
   - left = 4, right = 6
   - mid = 4 + (6-4)/2 = 5
   - arr[5] = 12
   - 12 > 10 -> search left half
   - right = mid - 1 = 4

4. Third iteration:
   - left = 4, right = 4
   - mid = 4 + (4-4)/2 = 4
   - arr[4] = 10 -> target found at index 4

Binary search completed successfully.
*/
