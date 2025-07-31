// reversing a word 

#include<stdio.h>

int main(){
    char temp;
    char arr[5] = {'a', 'p', 'p', 'l', 'e'};
    printf("elements original: ");
    for(int i = 0; i<5; i++){
        printf("%c", arr[i]);
    }

    for(int i = 0; i<5/2; i++){
        temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }

     printf("\nelements reversed: ");
     for(int i = 0; i<5; i++){
        printf("%c", arr[i]);
     }
     return 0;
}