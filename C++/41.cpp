//Write a C++ program to create class methods inside the class definition.

#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length, breadth;

    public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area(){
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length*breadth);
    }
};

int main(){
    Rectangle rect (10,4);

    cout<<"Area is: "<<rect.area()<<endl;
    cout<<"Perimeter is: "<<rect.perimeter()<<endl;
    return 0;
}
