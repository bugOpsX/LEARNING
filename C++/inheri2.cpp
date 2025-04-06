// Problem Statement: Create a base class Person, derive Student from it, and then derive CollegeStudent from Student.
// Attributes:
// Person → name, age
// Student → rollNumber
// CollegeStudent → collegeName, stream
// Tasks:
// Input and display full details for a college student.


#include<iostream>
#include<string>
using namespace std;

class Person{

    public:
    string name;
    string age;

    void takeData(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Age (DD/MM/YY): ";
        cin>>age;
    }
};

class Student : public Person{

    public:
    int rollNumber;

    void takeData(){
        cout<<"Enter Roll No.: ";
        cin>>rollNumber;
    }
};

class CollegeStudent : public Student{
    public:

    string CollegeName;
    string course;

    void takeData(){
        Person::takeData();
        Student::takeData();

        cout<<"Enter College Name: ";
        cin>>CollegeName;
        cout<<"Enter Course: ";
        cin>>course;
    }

    void DisplayData(){
        cout<<"\n\n**----**Sudent Information**----**\n\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"College: "<<CollegeName<<endl;
        cout<<"Course Enrolled: "<<course<<endl;
    }
};

int main(){
    CollegeStudent info;
    info.takeData();
    info.DisplayData();
    return 0;
}
