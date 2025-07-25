//Write a C program that takes an integer n as input and prints all numbers from 1 to n using a for loop.

#include<stdio.h>

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++){
        printf("%d\n", i);
    }
    return 0;
}