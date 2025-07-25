//Write a C program that takes an integer as input and prints its reverse.

#include<stdio.h>

int main(){
    int n, rev = 0;
    
    printf("enter the number: ");
    scanf("%d", &n);

    while (n!=0){
        int digit = n%10;
        rev = rev*10+digit;     
        n = n/10;
    }
    printf("Reversed number: %d\n", rev);
    
    return 0;
}