//Implement a C++ program to show the use of protected access
//specifier in inheritance. Use a base class member in a derived
//class.

#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }
};

// Derived class
class Student : public Person {
public:
    void displayName() {
        // Accessing protected member of base class
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.setName("Sumant Kumar"); // Set name using public base class function
    s1.displayName();           // Access name using derived class function

    return 0;
}
