//Write a C++ Program to find GCD of two numbers using function

#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    if (b == 0)
        return a;  
    return findGCD(b, a % b);  
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is: " << findGCD(num1, num2) << endl;

    return 0;
}

