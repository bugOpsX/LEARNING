//Write a C program to take a number n as input and count how many digits it has.

#include<stdio.h>

int main()
{
    int n, count = 0;
    printf("enter numbers: ");
    scanf("%d", &n);

    while(n != 0){
        n = n/10;
        count++;
    }

    printf("%d\n", count);
    return 0;

    
   
    
}