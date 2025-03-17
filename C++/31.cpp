//Write a C++ program to find the multiplication values and the cubic values using the inline function.

#include<iostream>
using namespace std;

inline int products(int a, int b) {
    return a * b;
}

inline int cube(int x){
    return x*x*x;
}

int main()
{
    int c,d,z;
    cout<<"Enter the number to find cube: ";
    cin>>c;

    cout<<"Enter two numbers to find product: ";
    cin>>d>>z;

    cout<<"cube is: "<<cube(c)<<endl;
    cout<<"Product is: "<<products(d,z)<<endl;
    return 0;
}