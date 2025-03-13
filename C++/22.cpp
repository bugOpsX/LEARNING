//) Write a C++ Program to find the cube of number using function.


#include <iostream>
using namespace std;
int cube(int a)
{
    return a*a*a;
}

int main()
{
    int x;
    cout<<"Enter the no. to find cube: ";
    cin>>x;
    cout<<"Cube of given no. is: "<<cube(x)<<endl;
    return 0;
}