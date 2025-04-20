#include <iostream>
using namespace std;

template <typename T>
class Calculator
{
public:
    T add(T a, T b)
    {
        return a + b;
    }
    T sub(T a, T b)
    {
        return a - b;
    }
    T mul(T a, T b)
    {
        return a * b;
    }
    T div(T a, T b)
    {
        if (b != 0)
            return a / b;
        else
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main()
{
    Calculator<int> calc;

    int a = 10, b = 5;
    cout << "Add: " << calc.add(a, b) << endl;
    cout << "Subtract: " << calc.sub(a, b) << endl;
    cout << "Multiply: " << calc.mul(a, b) << endl;
    cout << "Divide: " << calc.div(a, b) << endl;

    return 0;
}
