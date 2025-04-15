//Write a C++ Program to show access to Private Public and Protected using Inheritance.

#include<iostream>
using namespace std;

class Base{
    public:
    int publicVar;

    protected:
    int protectedVar;

    private:
    int privateVar;

    public:
    Base(){
        publicVar = 10;
        protectedVar = 20;
        privateVar = 30;
    }

    int getprivateVar (){
        return privateVar;
    }

    void displayData(){
        cout<<"Public Variable: "<<publicVar<<endl;
        cout<<"Protected Variable: "<<protectedVar<<endl;
        cout<<"Private Variable: "<<getprivateVar()<<endl;
    }
};

class Derived : public Base{

    public:
    void displayData(){
        cout<<"\n**Accessing Data In Derived Class**\n";
        cout<<"Public Variable: "<<publicVar<<endl;
        cout<<"Protected Variable: "<<protectedVar<<endl;
        cout<<"Private Variable (using function): "<<getprivateVar()<<endl;
    }
};

int main(){
    Derived obj;
    obj.displayData();
    cout<<"\n**Accessing in Main Funcion**"<<endl;
    cout<<"Public Variable: "<<obj.publicVar<<endl;
    //cout<<"Protected Variable: "<<obj.protectedVar<<endl; //can't be accessed 
    cout<<"Private Variable: "<<obj.getprivateVar()<<endl;  //can bs accessed using function
    
    return 0;
}