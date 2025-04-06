// PROBLEM 3: Multiple Inheritance – Athlete Info
// Problem Statement: Create:
// Class Player with attribute: playerName
// Class Sport with attribute: sportType
// Class Athlete that inherits from both and has a method displayDetails()
// Tasks:
// Set values and show the combined details using the displayDetails() method.

#include<iostream>
#include<string>
using namespace std;

class Player{

    public:
    string playerName;

    void takeData(){
        cout<<"Enter Name: ";
        cin>>playerName;
    }
};

class Sport{
    public:
    string sportType;

    void takeData(){
        cout<<"Enter Sport Type: ";
        cin>>sportType;
    }
};

class Athlete : public Player, public Sport{
    public:

    void takeData(){
    Player::takeData();
    Sport::takeData();
    }

    void displayData(){
        cout<<"\n\n**---Athlete Information----**\n";
        cout<<"Name: "<<playerName<<endl;
        cout<<"Sport Type: "<<sportType<<endl;
    }
};

int main(){
    Athlete info;
    info.takeData();
    info.displayData();
    return 0;
}
