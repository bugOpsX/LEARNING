//Overload a function to find the maximum of two, three, and four numbers.

#include<iostream>
using namespace std;

int max(int x, int y){
    if(x>y){
        cout<<x<<" is MAX!!"<<endl;
    }
    else{
        cout<<y<<" is MAX!!"<<endl;
    }
}

int max(int p, int q, int r){
    if(p>q && p>r){
        cout<<p<<" is MAX!!"<<endl;
    }
    else if(q>p && q>r){
        cout<<q<<" is MAX!!"<<endl;
    }
    else{
        cout<<r<<" is MAX!!"<<endl;
    }
}

int max(int s, int t, int u, int v){
    if(s>t && s>u && s>v){
        cout<<s<<" is MAX!!"<<endl;
    }
    else if(t>s && t>u && t>v){
        cout<<t<<" is MAX!!"<<endl;
    }
    else if(u>s && u>t && u>v){
        cout<<u<<" is MAX!!"<<endl;
    }
    else{
        cout<<v<<" is MAX!!"<<endl;
    }
}

int main(){
    int a,b,c,d,e,f,g,h,i;

    cout<<"Enter to compare two no: ";
    cin>>a>>b;
    max(a,b);

    cout<<"Enter to compare three no: ";
    cin>>c>>d>>e;
    max(c,d,e);

    cout<<"Enter to compare four no: ";
    cin>>f>>g>>h>>i;
    max(f,g,h,i);

return 0;    
}