//Develop a C++ program that uses a friend function to access
//private members of a class Numbers and return the sum of two
//numbers.

#include <iostream>
using namespace std;

class Numbers {
private:
    int num1, num2;

public:
    // Constructor to initialize values
    Numbers(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Declare friend function
    friend int findSum(Numbers n);
};

// Friend function definition
int findSum(Numbers n) {
    return n.num1 + n.num2;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Numbers obj(a, b);

    int result = findSum(obj);
    cout << "Sum of the numbers: " << result << endl;

    return 0;
}
