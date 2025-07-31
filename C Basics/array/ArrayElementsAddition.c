//addition of array elements

#include<stdio.h>

int main(){
    int arr[] = {10,12,14};
    int sum = 0;
    int dig;
    for(int i = 0; i<=2; i++){
       dig = arr[i];
        sum = sum + dig;
    }
    printf("sum of elements: %d", sum);
    return 0;
}