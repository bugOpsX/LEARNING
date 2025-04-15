//Write a C++ Menu Driven Program to perform Add, Modify, Append and Display.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void addData() {
    ofstream file("data.txt"); // overwrite
    string data;
    cout << "Enter data to add:\n";
    cin.ignore();
    getline(cin, data);
    file << data << endl;
    file.close();
    cout << "Data added.\n";
}

void appendData() {
    ofstream file("data.txt", ios::app); // append
    string data;
    cout << "Enter data to append:\n";
    cin.ignore();
    getline(cin, data);
    file << data << endl;
    file.close();
    cout << "Data appended.\n";
}

void displayData() {
    ifstream file("data.txt");
    string line;
    cout << "File content:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void modifyData() {
    ofstream file("data.txt"); // overwrite with new data
    string data;
    cout << "Enter modified data:\n";
    cin.ignore();
    getline(cin, data);
    file << data << endl;
    file.close();
    cout << "Data modified.\n";
}

int main() {
    int choice;
    do {
        cout << "\nMenu:\n1. Add\n2. Append\n3. Modify\n4. Display\n5. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addData(); break;
            case 2: appendData(); break;
            case 3: modifyData(); break;
            case 4: displayData(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
