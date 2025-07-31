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
/*When i = 0:
The code becomes rev[0] = arr[2-0], which is rev[0] = arr[2].
It takes the value at arr[2] (which is 14) and puts it into rev[0].
rev is now {14, _, _}.
When i = 1:
The code becomes rev[1] = arr[2-1], which is rev[1] = arr[1].
It takes the value at arr[1] (which is 12) and puts it into rev[1].
rev is now {14, 12, _}.
When i = 2:
The code becomes rev[2] = arr[2-2], which is rev[2] = arr[0].
It takes the value at arr[0] (which is 10) and puts it into rev[2].
rev is now {14, 12, 10}.
After this loop finishes, the rev array is completely filled with the reversed elements.*/

    printf("reversed array ");
    for(int i = 0; i<= 2; i++){
        printf("%d ", rev[i]);
    }
    return 0;
}

                   