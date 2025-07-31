// function in array

#include<stdio.h>

void change (int arr[3]){
    arr[0] = 12;
    // arr[1] = 22;
    // arr[2] = 11;
}

int main(){
    int a[3] = {1,2,3};     //we can take input also using for loop
    change(a);      //function calling
    printf("modified array: ");
    for(int i = 0; i<3; i++){       //function printing
        printf(" %d ", a[i]);
    }
    return 0;
}
