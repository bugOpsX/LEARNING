//Write a C++ program to add two integers using class.

#include<iostream>
using namespace std;

class Add{
    private:
    int a, b;

    public:
    Add (int x, int y){
    a = x;
    b = y;
    }

    int add(){
        return a + b;
    }

};

int main(){
    Add sum(10,5);
    cout<<"Sum is: "<<sum.add()<<endl;
    return 0;
}