// Problem Statement: Create a base class Person with attributes: name and age.
// Create a derived class Student with additional attributes: rollNumber and course.
// Tasks:
// Input all details using a member function.
// Display all the details using another function.

#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
    string name;
    string age;

    void InputDetails(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Age(DD/MM/YY): ";
        cin>>age;
    }

    
};

class Student : public Person{
    
    public:
    int RollNo;
    string course;

    void InputDetails(){
        Person::InputDetails();   //Calls Input data from base class

        cout<<"Enter Roll Number: ";
        cin>>RollNo;
        cout<<"Enter Course: ";
        cin>>course;
    }

    void displayData(){           //prints all data of base and derived class
        cout<<"----*Data Entered By User*----"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No.: "<<RollNo<<endl;
        cout<<"Course Enrolled: "<<course<<endl;
    }

};

int main(){
    Person p;
    Student s;
    p.InputDetails();
    s.InputDetails();
    s.displayData();
    return 0;

}

