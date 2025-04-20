// Write a C++ Program to Demonstrate try, catch block using excep on handling.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers (num1 and num2): ";
    cin >> num1 >> num2;

    try {
        if (num2 == 0) {
            throw "Division by zero error!";
        }
        cout << "Result: " << num1 / num2 << endl;
    } catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    return 0;
}
