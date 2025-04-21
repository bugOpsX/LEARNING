//Define a class Employee with data members empId, name, and
//salary. Write member functions to input and display employee
//details. Create multiple objects and display all employee data

#include<iostream>
#include<string>
using namespace std;

class Employee {
    public:
    string empId;
    string name;
    long long salary;

    void takedata() {
        cout << "Enter name: ";
        getline(cin, name);
        
        // cin>>name;
        cout << "Enter Employee ID: ";
        getline(cin, empId);
        // cin>>empId;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void printData() {
        cout << "\n** Employee Details **\n";
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee E1, E2;

    cout << "Enter Details of Employee 1" << endl;
    E1.takedata();

    cout << "Enter Details of Employee 2" << endl;
   
    cin.ignore();
    E2.takedata();

    E1.printData();
    E2.printData();

    return 0;
}

