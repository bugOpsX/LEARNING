// if 1 3 8 7 8 7 9 ; how many 7 are there

#include <stdio.h>

int main()
{
    int num = 233, count = 0;

    while(num>0){
        int rem = num%10;
        if(rem == 3){
            count++;
        }
        num = num/10;
    }
   

    printf("the count appears %d times.\n", count);
    return 0;
}