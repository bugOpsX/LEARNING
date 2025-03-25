//) Write a C++ program to add complex numbers using friend function.

#include<iostream>
using namespace std;


class Complex{
    private:
    float real;
    float imag;
    
    public:
    Complex(): real(0), imag(0){}
    Complex (float r, float i): real(r), imag(i){}

    friend Complex addComplex(const Complex&, const Complex&);

    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};


Complex addComplex(const Complex& c1, const Complex& c2){
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main()
{
    Complex num1(3.5, 2.5), num2(1.5, 4.5);

    cout<<"First Complex number: ";
    num1.display();

    cout<<"Second Complex number: ";
    num2.display();

    Complex sum = addComplex(num1, num2);

    cout<<"Sum of Complex Number is: ";
    sum.display();

    return 0;
}