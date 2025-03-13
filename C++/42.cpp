//Write a C++ program to define a class method outside the class definition.

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

    int area();
    int perimeter();
    void display();
};

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length + breadth);
}

void Rectangle::display()
{
    cout<<"Area is: "<<area()<<endl;
    cout<<"Perimeter is: "<<perimeter()<<endl;
}

int main()
{
    Rectangle rect(12,5);
    rect.display(); 
    return 0;
}