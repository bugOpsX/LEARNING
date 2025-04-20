//) Write a C++ Program to build Simple calculator using Class template.

#include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }

    T subtract(T a, T b) {
        return a - b;
    }

    T multiply(T a, T b) {
        return a * b;
    }

    T divide(T a, T b) {
        if (b != 0) {
            return a / b;
        } else {
            throw runtime_error("Division by zero is not allowed.");
        }
    }
};

int main() {
    Calculator<int> intCalc;
    Calculator<double> doubleCalc;

    cout << "Integer addition: " << intCalc.add(10, 5) << endl;
    cout << "Integer subtraction: " << intCalc.subtract(10, 5) << endl;
    cout << "Integer multiplication: " << intCalc.multiply(10, 5) << endl;
    try {
        cout << "Integer division: " << intCalc.divide(10, 5) << endl;
    } catch (const runtime_error &e) {
        cout << e.what() << endl;
    }

    cout << "Double addition: " << doubleCalc.add(10.5, 5.2) << endl;
    cout << "Double subtraction: " << doubleCalc.subtract(10.5, 5.2) << endl;
    cout << "Double multiplication: " << doubleCalc.multiply(10.5, 5.2) << endl;
    try {
        cout << "Double division: " << doubleCalc.divide(10.5, 5.2) << endl;
    } catch (const runtime_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}