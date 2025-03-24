// Create a Calculator class with methods for advanced arithmetic operations

#include <iostream>
#include <cmath>
using namespace std;

class calculator
{

public:
    double Add(double a, double b)
    {
        return a + b;
    }

    double Subtract(double a, double b)
    {
        return a - b;
    }

    double Product(double a, double b)
    {
        return a * b;
    }

    int Modulus(int a, int b)
    {
        if (b == 0)
        {
            cout << "Modulus not VALID!!" << endl;
            return 0;
        }
        return a % b;
    }

    int Quotient(int a, int b)
    {
        if (b == 0)
        {
            cout << "Division is not Valid!!" << endl;
            return 0;
        }
        return a / b;
    }

    double Exponential(double base, double exponent)
    {
        return pow(base, exponent);
    }
};

int main()
{
    calculator calc;
    double num1, num2;
    char option;
    double result = 0;
    cout << "Choose what to Perfrom: +, -, *, /, modulus (m), exponential (e)";
    cin >> option;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (option)
    {
    case '+':
        result = calc.Add(num1, num2);
        break;

    case '-':
        result = calc.Subtract(num1, num2);
        break;

    case '*':
        result = calc.Product(num1, num2);
        break;

    case '/':
        result = calc.Quotient(num1, num2);
        break;

    case 'e':
        result = calc.Exponential(num1, num2);
        break;

    case 'm':
        result = calc.Modulus(static_cast<int>(num1), static_cast<int>(num2)); 
        break;

    default:
        cout << "Invalid Operation!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}