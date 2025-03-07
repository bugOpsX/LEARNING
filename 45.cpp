// Write a C++ code to check whether a no is Prime or not.

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n%i==0)
        
    {
        return false;
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter the number to check: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << num << " is prime number." << endl;
    }

    else
    {
        cout << num << " is not prime number." << endl;
    }
    return 0;
}
