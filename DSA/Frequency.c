#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    // Compare function for qsort: sort by frequency descending
    int *x = (int *)a;
    int *y = (int *)b;

    // x[1] = frequency, x[0] = digit
    if (y[1] != x[1])
        return y[1] - x[1]; // higher frequency first
    else
        return y[0] - x[0]; // if same frequency, larger digit first
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    int freq[10] = {0}; // frequency array for digits 0-9

    // Count frequency of each digit
    long long temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }

    // Prepare array for sorting
    int digits[10][2]; // [digit, frequency]
    for (int i = 0; i < 10; i++) {
        digits[i][0] = i;      // store the digit
        digits[i][1] = freq[i]; // store frequency
    }

    // Sort using qsort
    qsort(digits, 10, sizeof(digits[0]), compare);

    printf("Digits sorted by frequency (descending):\n");
    for (int i = 0; i < 10; i++) {
        if (digits[i][1] > 0) {
            for (int j = 0; j < digits[i][1]; j++) {
                printf("%d", digits[i][0]);
            }
        }
    }
    printf("\n");

    return 0;
}
