//array reverse using in-place method


#include <stdio.h>

int main()
{
    int arr[3];
    int temp;

    // Taking array input
    printf("Enter the elements: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the original array
    printf("Elements original: ");
    for (int i = 0; i < 3; i++) {
        printf(" %d ", arr[i]);
    }

    // Reversing array elements in-place
    for (int i = 0; i < 3 / 2; i++) {
        /*
        Step 1: Loop starts from the beginning (i = 0) and goes till the middle (i < 3/2)
        Step 2: temp = arr[i]; stores the value of the current element (from start)
        Step 3: arr[i] = arr[2 - i]; replaces it with the corresponding element from the end
        Step 4: arr[2 - i] = temp; puts the original value (from temp) into the other side
        Final result: The elements are swapped from both ends, achieving in-place reversal.
        */
        temp = arr[i];
        arr[i] = arr[2 - i];
        arr[2 - i] = temp;
    }

    // Printing reversed array
    printf("\nReversed elements: ");
    for (int i = 0; i < 3; i++) {
        printf(" %d ", arr[i]);
    }

    return 0;
}
