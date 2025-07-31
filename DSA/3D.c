// 3D array

#include<stdio.h>

int main(){
    int arr[3][3][3];
    int i, j, k;

    printf("enter elements: ");

    for(i = 0; i<3; i++){       //for loop for taking 3D array input
        for(j = 0; j<3; j++){
            for(k = 0; k<3; k++){
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("elements are: ");

    for(i = 0; i<3; i++){       //for loop for 3D array output
        printf("\n");
        for(j = 0; j<3; j++){
            printf("\n");
            for(k = 0; k<3; k++){
                printf(" %d ", arr[i][j][k]);
            }
        }
    }
    return 0;
}
