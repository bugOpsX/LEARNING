//integer reverse in array (trasfering elements from one Array to another)

#include<stdio.h>

int main(){
    int arr[3];     //initializing array
    int rev[3];     //initializing reverse array of same size
    printf("enter elements in array: ");
    for(int i = 0; i<3; i++){       //taking input from user
        scanf("%d", &arr[i]);
    }
    printf("elements original: ");
    for(int i = 0; i<3; i++){       //printing original elements
        printf(" %d ", arr[i]);
    }
    
    for(int i = 0; i<3; i++){       //reversing elementa are storing in rev[3]
        rev[i] = arr[2-i];
    }
    printf("\nreversed array: ");
    for(int i =0; i<3; i++){        //printing reversed array
        printf(" %d ", rev[i]);
    }
    return 0;
}