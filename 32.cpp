//Write a C++ program to find Square of a number using inline function

#include<iostream>
using namespace std;

inline int square(int x)
{
    return x*x;
}

int main()
{
    int a;
    cout<<"Enter the no. to find Square: ";
    cin>>a;
    cout<<"Cube of given no. is: "<<square(a)<<endl;
    return 0;

}