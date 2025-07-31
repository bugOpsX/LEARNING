// array as string

#include<stdio.h>

int main(){
    char arr[5];    //array initialization

    printf("enter your characters of 5 letters: ");
    for(int i = 0; i<5; i++){       //taking character input from user
        scanf("%c", &arr[i]);
    }
    printf("word formed by array is: ");
    for(int i = 0; i<5; i++){       //printing array 
        printf("%c", arr[i]);
    }
    return 0;
}