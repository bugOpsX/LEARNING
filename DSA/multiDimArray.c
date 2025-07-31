// Multi Dimensional Array

#include<Stdio.h>

int main(){
    int arr[2][2][2][2];
    int i,j,k,l;

    printf("enter elements: ");
    for(i = 0; i<2; i++){           //for taking 4D input
        for(j = 0; j<2; j++){
            for(k = 0; k<2; k++){
                for(l = 0; l<2; l++){
                    scanf("%d", &arr[i][j][k][l]);
                }
            }
        }
    }

    printf("elements are: ");
    for(i = 0; i<2; i++){           //for output of Multi Dimensional Array
        printf("\n");
        for(j = 0; j<2; j++){
            printf("\n");
            for(k = 0; k<2; k++){
                printf("\n");
                for(l = 0; l<2; l++){
                    printf(" %d ", arr[i][j][k][l]);
                }
            }
        }
    }
    return 0;
}