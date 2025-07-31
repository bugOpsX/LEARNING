//array input and output

#include<stdio.h>
int main(){
    // int arr[5];
    // arr[0] = 12;  
    // arr[1] = 14;
    // arr[2] = 16;   //taking input by programmer
    // arr[3] = 18;
    // arr[4] = 20;
    // arr[5] = {10,12,14,16,12}
    int a[5];
    printf("enter the elments in array:\n");
    for(int i = 0; i<5; i++){   //taking input from user
        scanf("%d", &a[i]);
    }
    printf("elements are: ");   //printing the array elements
    for(int i = 0; i<5; i++){
        printf(" %d ", a[i]);
    }
    return 0;
}