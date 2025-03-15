// C++ Program to check whether palindrome or not.

#include<iostream>
using namespace std;

int main()
{
    int num, reverseNum= 0, originalNum, remainder;

    cout<<"Enter any integer: ";
    cin>>num;
    originalNum = num;
    while (num != 0){
        

        remainder = num%10;
        reverseNum = reverseNum*10 + remainder;
        num /= 10;
    }

    if (originalNum == reverseNum){
        cout<<originalNum<<" is a palingdrome.";
    }
    else{
        cout<<originalNum<<" is not a palingdrome.";
    }
    return 0;
}