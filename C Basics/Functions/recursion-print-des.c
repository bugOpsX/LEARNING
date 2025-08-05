//Print numbers from 1 to N using recursion
// ➤ Input: N = 5 → Output: 1 2 3 4 5 (descending order)

#include<stdio.h>

void printnum(int n){
    if (n == 0){
        return;
    }
    printf(" %d ", n);  // Print recursion to get descending order
    printnum(n-1);      // Recursive call
}

int main(){
    int a;
    printf("enter a number to print from where: ");
    scanf("%d", &a);
    printf("numbers are: ");
    printnum(a);
    return 0;
}