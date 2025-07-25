#include<stdio.h>

void swap(int a, int b, int temp){
    temp = a;
    a = b;
    b = temp;
    printf("after swapping x = %d and y = %d", a,b);
}

int main(){
    int x,y;
    printf("enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("before swapping x = %d and y = %d\n", x,y);
    swap(x,y, 0);
    return 0;
}