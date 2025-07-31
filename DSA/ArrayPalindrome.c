//Check if an integer array is a palindrome.

#include <stdio.h>

int main() {
    int size;
    
    // Step 1: Ask user for array size
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    // Step 2: Take input of array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Check for palindrome
   int isPalindrome = 1;  // assume true initially

    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            isPalindrome = 0;  // mismatch found
            break;
        }
    }

    // Step 4: Print result
    if (isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is NOT a palindrome.\n");
    }

    return 0;
}
