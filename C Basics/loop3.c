//Write a C program that takes a number n as input and prints its multiplication table up to 10.

#include<stdio.h>

int main(){
    int n, table;
    printf("enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++){
        table = n * i;
        printf("%d * %d = %d\n",n, i, table);
    }
    return 0;
}