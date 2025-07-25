// //1. Get last digit: 1234 % 10 = 4
// 2. Add it to sum → sum = 0 + 4 = 4
// 3. Remove last digit: 1234 / 10 = 123
// 4. Repeat until number becomes 0


#include<stdio.h>

int main(){
    int n, sum = 0; 
    printf("enter the number: ");
    scanf("%d", &n);

    while(n > 0){
        sum += n%10;
        n = n/10;
    }
    printf("the sum of digits are: %d\n", sum);
    return 0;

}