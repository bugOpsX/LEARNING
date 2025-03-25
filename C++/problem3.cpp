//Implement a class Fraction to add two fractions and simplify the result.

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    // Function to calculate GCD (Greatest Common Divisor)
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    // Simplify the fraction
    void simplify() {
        int commonDivisor = gcd(numerator, denominator);
        numerator /= commonDivisor;
        denominator /= commonDivisor;
    }

public:
    // Constructor to initialize the fraction
    Fraction(int num = 0, int den = 1) {
        if (den == 0) {
            cout << "Denominator cannot be zero. Setting denominator to 1." << endl;
            den = 1;
        }
        numerator = num;
        denominator = den;
        simplify();
    }

    // Function to add two fractions
    Fraction add(const Fraction& other) {
        int newNumerator = (numerator * other.denominator) + (other.numerator * denominator);
        int newDenominator = denominator * other.denominator;
        Fraction result(newNumerator, newDenominator);
        return result;
    }

    // Function to display the fraction
    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};

// Main function to test the Fraction class
int main() {
    int num1, den1, num2, den2;

    cout << "Enter numerator and denominator for the first fraction: ";
    cin >> num1 >> den1;
    cout << "Enter numerator and denominator for the second fraction: ";
    cin >> num2 >> den2;

    Fraction f1(num1, den1);
    Fraction f2(num2, den2);

    cout << "First fraction: ";
    f1.display();
    cout << "Second fraction: ";
    f2.display();

    Fraction result = f1.add(f2);
    cout << "Sum of fractions: ";
    result.display();

    return 0;
}


// #include<iostream>
// using namespace std;

// class Fraction{
//     private: 

//     int numerator;
//     int denomenator;

//     public:
//     Fraction(int nr = 0, int dr = 1){
//         if(dr == 0){
//             cout<<"Denominator cannot be ZERO!, Initilazing to 1"<<endl;
//             dr = 1;
//         }
//         numerator = nr;
//         denomenator = dr;
//     }


// };