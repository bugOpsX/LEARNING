#include<iostream>
using namespace std;

#define pi 3.14159
int areaOfCircle(int x)
{
    return pi*x*x;
}

int areaOfTriangle(int x, int y)
{
    return 0.5*x*y;
}

int areaOfRectangle(int x, int y)
{
    return x*y;
}

int main()
{
    int r,l,b,h,bs;
    cout<<"Enter the Radius: ";
    cin>>r;
    cout<<"Enter the Height of Triangle:";
    cin>>h;
    cout<<"Enter the Base of Triangle:";
    cin>>bs;
    cout<<"Enter the Length of Rectangle:";
    cin>>l;
    cout<<"Enter the Breadth of Rectangle:";
    cin>>b;
    cout<<"Area of Circle is: "<<areaOfCircle(r)<<endl;
    cout<<"Area of Triangle is: "<<areaOfTriangle(h,bs)<<endl;
    cout<<"Area of Rectangle is: "<<areaOfRectangle(l,b)<<endl;

   
    return 0;
}