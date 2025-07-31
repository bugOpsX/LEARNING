// 2D array 

#include<stdio.h>

int main(){
    int arr[3][4];

    printf("Enter elements in 2D array: ");
    for(int i = 0; i<3; i++){       // nested for loops  taking input from user
        for(int j = 0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }  

    printf("elements are: ");
    for(int i = 0; i<3; i++){       //nested for loop for printing 2D array
        printf("\n");
        for(int j = 0; j<4; j++){
            printf(" %d ", arr[i][j]);
        }
}
}

