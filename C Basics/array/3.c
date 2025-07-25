// array reverse

#include <stdio.h>

int main()
{
    int rev[3];
    int arr[] = {10, 12, 14};

    for(int i = 0; i<=2; i++){ //running i from 0 to 2
        rev[i] = arr[2-i];     //making it as 2-i(0) = 2; 2-i(1) = 1; 2-i(2) = 0
                    // it will take values of those indicies and put it in rev[i]
    }
    printf("reversed array ");
    for(int i = 0; i<= 2; i++){
        printf("%d ", rev[i]);
    }
    return 0;
}

                   