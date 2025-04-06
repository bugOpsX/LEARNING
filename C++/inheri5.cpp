// PROBLEM 5: Inheritance + Access Specifiers
// Problem Statement: Create a class Employee with:
// public: name
// protected: employeeId
// private: salary
// Create a derived class Manager that:
// Accesses name and employeeId correctly.
// Tries to access salary (show it’s inaccessible).
// Tasks:
// Demonstrate proper access using functions.

#include<iostream>
#include<string>
using namespace std;

class Employee{
    private: 
    double salary;
    protected:
    int employeeID;
    public:
    string name;

    Employee(string n, int ID, double s){
        salary = s;
        employeeID = ID;
        name = n;
    }
    void displaySalary(){
        cout<<"Salary: "<<salary<<endl;
    }   
};

class Manager : public Employee{

    public:
    Manager(string n, int ID, double s) : Employee(n, ID, s) {}

    void display(){
        cout << "\n** Manager Info **" << endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Employee ID: "<<employeeID<<endl;
         // cout << "Salary: " << salary << endl;         //Error: salary is private
         cout << "Salary: (Not accessible directly - private)" << endl;
    }
};

int main(){
    Manager info("Sushant", 147, 45000.0);
    info.display();

    info.displaySalary();

    return 0;

}