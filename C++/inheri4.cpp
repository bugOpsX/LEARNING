// PROBLEM 4: Hierarchical Inheritance – Vehicle Info
// Problem Statement: Create a base class Vehicle with attribute brand.
// Create two derived classes:
// Car with attribute model
// Bike with attribute type
// Tasks:
// Use constructor initialization.
// Create objects of Car and Bike and display their info.

#include<iostream>
#include<string>
using namespace std;

class Vehicle{
    
    protected:
    string brand;
    
    public:

    Vehicle(string b){
        brand = b;
    }

    void Display(){
        cout<<"Brand: "<<brand<<endl;
    }

};

class Car : public Vehicle{
    string model;
    
    public:
    Car(string b, string m) : Vehicle(b)
    {
        model = m;
    }

    void Display(){
        cout<<"\n\n**----Car Information----**\n";
        Vehicle::Display();
        cout<<"Model: "<<model<<endl;
    }
};

class Bike : public Vehicle{
    
    string type;

    public:
    Bike(string b, string t) : Vehicle(b)
    {
        type = t;
    }

    void Display(){
        cout<<"\n\n***----Bike Information----***\n";
        Vehicle::Display();
        cout<<"Type: "<<type<<endl;
    }
};

int main(){
    string carModel, carBrand;
    string bikeBrand, bikeModel;

    cout<<"Enter Car's Brand: ";
    getline(cin, carBrand);
    cout<<"Enter Car's Model: ";
    getline(cin,carModel);
    Car mycar(carBrand, carModel);
    mycar.Display();

    cout<<"\n\nEnter Bike's Brand: ";
    getline(cin, bikeBrand);
    cout<<"Enter Bike's Model: ";
    getline(cin,bikeModel);
    Bike mybike(bikeBrand, bikeModel);
    mybike.Display();

    return 0;

}