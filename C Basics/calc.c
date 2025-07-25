#include <stdio.h>

int main()
{
    char choice;
    int num1, num2;

    printf("enter 1st number: ");
    scanf("%d", &num1);
    printf("enter 2nd number: ");
    scanf("%d", &num2);
    printf("+ , - , *, / , % ");
    scanf(" %c", &choice);

    switch (choice)
    {
    case '+':
        printf("sum is: %d", num1 + num2);
        break;
    case '-':
        printf("difference is: %d", num1 - num2);
        break;
    case '*':
        printf("product is: %d", num1 * num2);
        break;
    case '/':
        printf("quotient is: %d", num1 / num2);
        break;
        case '%':
        printf("quotient is: %d", num1 % num2);
        break;
    }

    return 0;
}
