//Write a C++ Program to Convert Fahrenheit to centigrade and centigrade to farenhite.

#include<iostream>
using namespace std;

double toCentigrade(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
double toFarenhite(double centigrade) {
    return (centigrade * 9 / 5) + 32;
}
int main()
{
    double frh, centi;
    cout<<"Enter the temperature in Fahrenheit: ";
    cin>>frh;
    cout<<"Enter the Tempraure in Centigrade: ";
    cin>>centi;
    cout<<"Temperature in Centigrade is: "<<toCentigrade(frh)<<endl;
    cout<<"Temperature in Farenhite is: "<<toFarenhite(centi)<<endl;
    return 0;
}