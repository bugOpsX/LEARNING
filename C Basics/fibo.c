#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    // Step 1: Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Step 2: Keep a copy of the original number
    original = num;

    // Step 3: Reverse the number
    while (num != 0) {
        digit = num % 10;                 // Get last digit
        reversed = reversed * 10 + digit; // Add it to reversed
        num = num / 10;                   // Remove last digit
    }

    // Step 4: Compare original and reversed
    if (original == reversed) {
        printf("It is a palindrome.\n");
    } else {
        printf("It is not a palindrome.\n");
    }

    return 0;
}
