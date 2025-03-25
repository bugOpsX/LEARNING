//Write a C++ Program for Enter Patient details using Inheritance.

#include<iostream>
#include<string>
using namespace std;

class PatientInfo{
    public:
    string name;
    int age;
    string gender;
    long long contact;
    string address;

    void getDetails(){
        cout<<"\n***Fill Patient's Details***"<<endl;
        cout<<"Name: ";
        cin>>name;
        cout<<"Age: ";
        cin>>age;
        cout<<"Gender: ";
        cin>>gender;
        cout<<"Contact: ";
        cin>>contact;
        cout<<"Address: ";
        cin>>address;
    }

    void printdetail(){
        cout<<"\n***Patient's Basic Detail (entered by user)***"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Contact: "<<contact<<endl;
        cout<<"Address: "<<address<<endl;
    }
};

class PatientDesease : public PatientInfo{
    
    public:
    string bloodgrp;
    int id;
    string date;
    string doc;

    void getPatient(){
        cout<<"\n***Enter Desease Details***"<<endl;
        cout<<"Blood Group: ";
        cin>>bloodgrp; 
        cout<<"Patient ID: ";
        cin>>id;
        cout<<"Date of Admit: "; 
        cin>>date;
        cout<<"Doctor Appointed: ";
        cin>>doc;
    }
    
    void printPatient(){
        cout<<"\n***Desease Detail (entered by user)***"<<endl;
        cout<<"Blood Group: "<<bloodgrp<<endl;
        cout<<"Patient ID: "<<id<<endl;
        cout<<"Date of Admit: "<<date<<endl;
        cout<<"Doctor Appointed: "<<doc<<endl;
    }
};

class MedicalRecord : public PatientDesease{
    
    public:
    string diag;
    string treatplan;
    string medic;
    string allergies;

    void getMedcial(){
        cout<<"\n***Enter Medical Records***"<<endl;
        cout<<"Diagnosis: ";
        cin>>diag;
        cout<<"Treatment Plan: ";
        cin>>treatplan;
        cout<<"Medications: ";
        cin>>medic;
        cout<<"Allergies: ";
        cin>>allergies;
    }
    
    void printMedical(){
        cout<<"\n***Medical Records(entered by user)***"<<endl;
        cout<<"Diagnosis: "<<diag<<endl;
        cout<<"Treatment Plan: "<<treatplan<<endl;
        cout<<"Medications: "<<medic<<endl;
        cout<<"Allergies: "<<allergies<<endl;
    }
};

int main(){
    MedicalRecord patient;

    patient.getDetails();
    patient.getPatient();
    patient.getMedcial();

    patient.printdetail();
    patient.printPatient();
    patient.printMedical();

    return 0;

    
}

