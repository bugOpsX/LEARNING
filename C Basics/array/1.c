//array printing 

#include<stdio.h>

int main(){
    int arr[] = {10,14,12};
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}

