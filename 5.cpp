//Write a C++ Program to find the Sum of natural numbers.

#include<iostream>
using namespace std;

int main()
{
    int a, sum = 0;
    cout <<"Enter a Number: ";
    cin>>a;
    for(int i =1; i <= a; i++)
    {
        sum += i;
    }
    cout<<"Sum of Natural Numbers: "<<sum<<endl;
    return 0;
}