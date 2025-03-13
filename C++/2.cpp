//Write a C++ Program to find out positive or negative number

#include<iostream>
using namespace std;

    int main()
    {
        int n;
        cout<<"Enter a Number: ";
        cin>>n;

        if(n>0)
        {
            cout<<"The Number is Positive";
        }
        else if(n<0)
        {
            cout<<"The Number is Negative";
        }
        else
        {
            cout<<"The Number is Zero";
        }
        return 0;

    }
