//Write a C++ code to check whether a no is Prime or not using class.

#include<iostream>
using namespace std;

class Prime{
    int num;

    public:
    Prime (int n){
        num = n;
    }
    bool isPrime();
    void display();
};

bool Prime::isPrime(){
    if(num<2){
        return false;
    }

    for (int i = 2; i*i <= num; i++){
        if(num%2==0)
        return false;
    }
    return true;
}

void Prime::display(){

    if (isPrime())
    {
        cout<<num<<" is prime number."<<endl;
    }

    else{
        cout<<num<<" is not prime number."<<endl;
    }

}


int main(){
    int x;

    cout<<"Enter the no. to check: ";
    cin>>x;
        Prime check(x);
        check.display();
        return 0;
}