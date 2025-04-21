//Write a C++ program to write and read employee details (id,name, salary) to/from a file using ofstream and ifstream

#include <iostream>
#include <fstream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float salary;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();  // To ignore leftover newline character
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.input();

    // Writing to file
    ofstream outFile("employee.txt");
    if (!outFile) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    outFile << emp.id << endl;
    outFile << emp.name << endl;
    outFile << emp.salary << endl;
    outFile.close();

    // Reading from file
    Employee readEmp;
    ifstream inFile("employee.txt");
    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    getline(inFile, readEmp.name); // Read ID as string then convert if needed
    readEmp.id = stoi(readEmp.name); // Convert ID to int
    getline(inFile, readEmp.name);
    inFile >> readEmp.salary;

    inFile.close();

    cout << "\nReading from file..." << endl;
    readEmp.display();

    return 0;
}
