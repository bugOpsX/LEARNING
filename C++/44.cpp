//Write a C++ code for read and print student information using class.

#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string Name;
    string Division;
    long long Enrollment; 
    
    public:
    Student (string n, string d, int e){
        Name = n;
        Division = d;
        Enrollment = e;
    }

    string NameOfStudent();
    string DivisionOfStudent();
    long long EnrollmentOfStudent();
    void display();
};

string Student::NameOfStudent(){
        return Name;
}

string Student::DivisionOfStudent()
{
    return Division;
}

long long Student::EnrollmentOfStudent()
{
    return Enrollment;
}

void Student::display()
{
    cout<<"Name: "<<NameOfStudent()<<endl;
    cout<<"Division: "<<DivisionOfStudent()<<endl;
    cout<<"Enrollment: "<<EnrollmentOfStudent()<<endl;
}

int main()
{
    Student info("Sumant Kumar", "2EN6", 502);
    info.display();
    return 0;
}

