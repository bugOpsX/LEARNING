//Write a C++ program to calculate the area of circle, rectangle and triangle using function overloading.

#include<iostream>
using namespace std;

#define pi 3.14

float area(float radiusOfCircle)
{
    return pi*radiusOfCircle*radiusOfCircle;
}

double area(double lenghtRectangle, double breadthRectangle)
{
    return lenghtRectangle*breadthRectangle;
}

float area(float baseTriangle, float heightTriangle)
{
    return 0.5*baseTriangle*heightTriangle;
}

int main()
{
    float rc, lr, br, bt, ht;

    cout<<"Enter the Radius of Circle: ";
    cin>>rc;
    cout<<"The Area of Circle is: "<<area(rc)<<endl;

    cout<<"Enter the Length and Breadth of Rectangle: ";
    cin>>lr>>br;
    cout<<"The Area of Rectangle is: "<<area(lr, br)<<endl;

    cout<<"Enter the Base and Height of Triangle: ";
    cin>>bt>>ht;
    cout<<"The Area of Triangle is: "<<area(bt,ht)<<endl;

    return 0;
}