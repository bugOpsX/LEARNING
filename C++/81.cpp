//Write a C++ Program to Read and Write File Opera on in File Handling.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    string filename = "Sample.txt";
    string data;

    ofstream writeFile("Sample.txt");
        if(!writeFile){
            cerr<<"Error! writing file!"<<endl;
            return 1;
        }

        cout<<"Enter data in file: ";
        getline(cin, data);

        writeFile<<data<<endl;
        writeFile.close();
        cout<<"Data Written to file Successfully!"<<endl;

        ifstream inFile("Sample.txt");
            if(!inFile){
                cerr<<"Error! While opening file!";
                return 1;
            }
        string line;
            while(getline(inFile, line)) {
                cout<<line<<endl;
            }
            inFile.close();
            return 0;

}