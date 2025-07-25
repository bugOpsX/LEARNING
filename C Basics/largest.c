#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter three numbers: ");
    scanf("%d %d %d ", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is greatest.\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greatest.\n", b);
    }
    else
    {
        printf("%d is greatest.\n", c);
    }

    // int temp1 = (a > c) ? a : c;
    // int temp2 = (b > c) ? b : c;
    // int max = (a > b) ? temp1 : temp2;

    // printf("%d is greatest!\n", max);

   
    return 0;
}