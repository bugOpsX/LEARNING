//Write a C++ Program swapping of 2 numbers.

#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;

    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter 2nd Number: ";
    cin>>b;
    temp = a;
    a= b;
    b= temp;
    cout<<"After swapping 1st Number is: "<<a<<endl;
    cout<<"After swapping 2nd Number is: "<<b<<endl;
    return 0;
}