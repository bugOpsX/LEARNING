#include <stdio.h>
#include <limits.h>

int second_largest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return (second == INT_MIN) ? -1 : second; // Return -1 if no second largest
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = second_largest(arr, n);
    if (result == -1) {
        printf("No second largest element found.\n");
    } else {
        printf("The second largest element is: %d\n", result);
    }

    return 0;
}