//Write a C++ Program to find Largest among two numbers using function template.

#include<iostream>
using namespace std;

template <typename T>
    T greatestnum(T a , T b){
        if(a>b){
            cout<<a<<" is Greatest."<<endl;
        }

        else{
            cout<<b<<" is Greatest."<<endl;
        }
    };

    int main(){
        int x, y;

        cout<<"Enter two Numbers: ";
        cin>>x>>y;

        greatestnum(x,y);
        return 0;

    }