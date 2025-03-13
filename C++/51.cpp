//Write a C++ Program To calculate Volume of Box using Constructor.

#include<iostream>
using namespace std;

class Box{
    int length, breadth, height;

    public:
    Box (int l, int b, int h){
         length = l;
         breadth = b; 
         height = h;
    }

    int volume ()
    {
        return length*breadth*height;
    }

    void display()

{
    cout<<"Area of the Box is: "<<volume()<<endl;
}
    
};

int main(){

    int a, b, c;
    cout<<"Enter leght, breadth, height: ";
    cin>>a>>b>>c;

    Box vol(a,b,c);
    vol.volume();
    vol.display();
    return 0;

}