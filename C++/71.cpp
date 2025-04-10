//Write a C++ Program to demonstrate Run time Polymorphism.

#include<iostream>
#include<cmath>
using namespace std;

class Shape{

    public:

    virtual void area(){
        cout<<"Area of shape is undefined!\n";
    }
};

class Rectangle : public Shape{
    private:
    double lenght;
    double width;

    public:
    Rectangle(double l, double w): lenght(l), width(w){}

    void area() override{
        cout<<"Area os Rectangle is: "<<lenght*width<<endl;
    }
};

class Circle : public Shape{

    private:
    double radius;

    public:
    Circle(double r): radius(r){}

    void area() override{
        cout<<"Area of Circle is: "<<M_PI*radius*radius<<endl;
    }
};

int main(){
    Rectangle rect(15.0, 17.3);
    Circle circ(60.);

    Shape* shapeptr;

    shapeptr = &rect;
    shapeptr -> area();

    shapeptr = &circ;
    shapeptr -> area();

    return 0;
}