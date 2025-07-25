// #include<stdio.h>

// int main(){

//     char a;
//     printf("enter any alphabet: ");
//     scanf(" %c", &a);

//     if(a >= 65 && a <= 90){
//         printf("%c is UPPER CASE ALPHABET.\n", a);
//     }
//     else if(a >= 97 && a <= 122){
//         printf("%c is lower case alphabet.\n", a);
//     }
//     else{
//         printf("%c is not an alphabet.\n", a);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{

    char a;
    printf("enter any alphabet: ");
    scanf("%c", &a);

    if (a <= 90 && a >= 65)
    {
        printf("%c is UPPER CASE ALPHABET.\n", a);
    }
    else if (a >= 97 && a <= 122)
    {
        printf("%c is lower case alphabet.\n", a);
    }
    else
    {
        printf("%c is lower case alphabet.\n", a);
    }
    return 0;
}