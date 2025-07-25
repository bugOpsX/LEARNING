#include<stdio.h>

void change(int nums[]){
    nums[0] = 99;
}

int main(){
    int arr[]= {1,2,3,4};
    change(arr);
    printf("array now: %d", arr[0]);
   return 0;
}