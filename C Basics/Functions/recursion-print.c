//Print numbers from 1 to N using recursion
// ➤ Input: N = 5 → Output: 1 2 3 4 5 (ascending order)

#include<stdio.h>

void numbers(int n){
    if (n == 0){
        return;
    }
    numbers(n-1);       // Recursive call
    printf("%d ", n);   // Print after recursion to get ascending order
}

int main(){
    int num;
    printf("enter a number to print upto: ");
    scanf("%d", &num);
    printf("numbers are: ");
    numbers(num);
    return 0;
}