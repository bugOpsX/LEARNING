//function that calls it self - recursive function
// factorial of sny number n;

#include<stdio.h>

int factorial(int num){     //UDF for factorial
    if(num == 0 || num == 1){
        return 1;
    }
    else{
        return (num * factorial(num - 1));      //calling function itself
    }
}


int main(){
    int n; 
    printf("enter a number to find factorial: ");
    scanf("%d", &n);

    printf("factorial is: %d", factorial(n));   //passing value in function
    return 0;
}
