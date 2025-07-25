#include<stdio.h>

int main(){
    int a, rem, sum = 0;

    printf("enter a number: ");
    scanf("%d", &a);
    int temp = a;
    while(temp>0){
        rem = temp%10;     // taking numbers one by one 
        int cube = rem*rem*rem;     //if we do % then we get the last number and when we need to remove the last number
        sum += cube; 
        temp = temp/10;   //we devide by 10 
    }                          //and by these method we can check the 3 digit armostrong number.

    if(sum == a){
        printf("yes its a armostrong number!!");
    }
    else{
        printf("its NOT a armostrong number!!");
    }
    return 0;
    
}