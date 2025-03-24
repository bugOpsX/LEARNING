// Create a class Student with functions to input and display student details, some defined inside and some outside the class.

#include <iostream>
#include <string>
using namespace std;

class Student
{
    string Name;
    string Division;
    int Enrollment;
    string Address;

    public:

    void display()
    {
        cout << "Name: " << Name << endl;
        cout << "Division: " << Division << endl;
        cout << "Enrollment: " << Enrollment << endl;
        cout << "Address: " << Address << endl;
    }

    string information();
};

string Student::information()
{
    cout << "Enter name: ";
    cin >> Name;
    cout << "Enter Division: ";
    cin >> Division;
    cout << "Enter Enrollment: ";
    cin >> Enrollment;
    cout << "Enter Address: ";
    cin >> Address;
}

int main()
{
    Student info;
    info.information();
    info.display();
    return 0;
}
