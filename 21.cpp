//Write a C++ Program for doing arithmetic operations using function that program includes the following functions – Addition, Subtraction, Multiplication, Division and Modulus

#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int difference(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

int quotient(int a, int b) {
    if(b==0)
    {
        cout<<"Divison by 0 is not allowed!";
        return 0;
    }
    return a / b;
}

int modulu(int a, int b) {
    if(b==0)
    {
        cout<<"Modulus by 0 is not allowed!";
        return 0;
    }
    return a % b;
}

int main()
{
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Sum is: "<<sum(x,y)<<endl;
    cout<<"Difference is: "<<difference(x,y)<<endl;
    cout<<"Product is: "<<product(x,y)<<endl;
    cout<<"Quotient is: "<<quotient(x,y)<<endl;
    cout<<"Modulus is: "<<modulu(x,y)<<endl;
    return 0;

}