//Write a C++ program to find volume of cube, cylinder, sphere by function overloading

#include<iostream>
using namespace std;

#define pi 3.14
int volume(int side)
{
    return side*side*side;
}

float volume(float radius, float heightOfCylinder)
{
    return pi*radius*radius*heightOfCylinder;
}

float volume(float radiusOfSphere)
{
    return (4.0/3.0)*pi*radiusOfSphere*radiusOfSphere*radiusOfSphere;
}

int main()
{
    int h,r,r2,a;

    cout<<"Enter the Side of Cube: ";
    cin>>a;
    cout<<"Enter the Radius and Height of Cylinder: ";
    cin>>r>>h;
    cout<<"Enter the Radius of Sphere: ";
    cin>>r2;

    cout<<"The volume of Cube is: "<<volume(a)<<endl;
    cout<<"The volume of Cylinder is: "<<volume(r,h)<<endl;
    cout<<"The volume of Sphere is: "<<volume(r2)<<endl;
    return 0;
}

