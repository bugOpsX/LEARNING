//Write a C++ Program to find the greatest of 3 numbers.

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 1st Number: ";
    cin>>a;
    cout<<"Enter 2nd Number: ";
    cin>>b;
    cout<<"Enter 3rd Number: ";
    cin>>c;

    if(a>>b && a>>c)
    {
        cout<<a<<" is greatest of these three.";
    }

    else if(b>>a && b>>c)
    {
        cout<<b<<" is greatest of these three.";
    }

    else
    {
        cout<<c<<" is greatest of these three.";
    }
return 0;
}