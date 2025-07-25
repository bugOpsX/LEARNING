// take the two inputs and give sum

// #include<stdio.h>

// void sum(int a, int b){
//     printf("sum is %d", a+b);
// }

// int main(){
//     int x,y;
//     printf("enter two numbers: ");
//     scanf("%d %d", &x, &y);
//     sum(x, y);
//     return 0;
// }

#include<stdio.h>

// int sum(int a, int b){
//     return a+b;
// } 

// int main(){
//     int x, y;
//     printf("enter two numberr: ");
//     scanf("%d %d", &x, &y);
//     printf("Sum is: %d", sum(x,y));
//     return 0;
// }


void sum(int *a, int *b){
    printf("sum is: %d", (*a) + (*b));
}

int main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum(&a, &b);
    return 0;
}