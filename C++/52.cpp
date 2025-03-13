//Write a C++ Program to demonstrate the Concept of Destructor

#include<iostream>
using namespace std;

class Arithmetic{
    int num1, num2;

    public:
    Arithmetic (int x, int y){
        num1 = x;
        num2 = y;
        cout<<"Variable is Initialized!"<<endl;
    }

    void sum(){
        cout<<"Sum is: "<<num1+num2<<endl;
    }

    ~Arithmetic(){
        cout<<"Destrcutor is called!";
    }
};

int main(){
    int a,b;

    cout<<"Enter two Numbers: ";
    cin>>a>>b;

    Arithmetic plus(a,b);
    plus.sum();
    return 0;
}