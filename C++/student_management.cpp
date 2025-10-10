#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    void input() {
        cout << "\nEnter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() const {
        cout << left << setw(20) << name
             << setw(10) << roll
             << setw(10) << marks << endl;
    }
};

class StudentManager {
private:
    vector<Student> students;
    const string filename = "students.dat";

    void loadFromFile() {
        ifstream file(filename, ios::binary);
        if (!file) return;
        Student s;
        while (file.read((char*)&s, sizeof(Student))) {
            students.push_back(s);
        }
        file.close();
    }

    void saveToFile() {
        ofstream file(filename, ios::binary | ios::trunc);
        for (const auto &s : students) {
            file.write((char*)&s, sizeof(Student));
        }
        file.close();
    }

public:
    StudentManager() {
        loadFromFile();
    }

    void addStudent() {
        Student s;
        s.input();
        students.push_back(s);
        saveToFile();
        cout << "\n✅ Student Added Successfully!\n";
    }

    void displayAll() {
        if (students.empty()) {
            cout << "\n⚠️ No Records Found!\n";
            return;
        }
        cout << "\n=== All Student Records ===\n";
        cout << left << setw(20) << "Name"
             << setw(10) << "Roll"
             << setw(10) << "Marks" << endl;
        cout << "----------------------------------------\n";
        for (const auto &s : students) {
            s.display();
        }
    }

    void searchStudent() {
        int roll;
        cout << "\nEnter Roll Number to Search: ";
        cin >> roll;
        for (const auto &s : students) {
            if (s.roll == roll) {
                cout << "\n🎯 Student Found!\n";
                s.display();
                return;
            }
        }
        cout << "\n❌ Student Not Found!\n";
    }

    void deleteStudent() {
        int roll;
        cout << "\nEnter Roll Number to Delete: ";
        cin >> roll;

        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->roll == roll) {
                students.erase(it);
                saveToFile();
                cout << "\n🗑️ Student Deleted Successfully!\n";
                return;
            }
        }
        cout << "\n❌ Student Not Found!\n";
    }
};

int main() {
    StudentManager sm;
    int choice;

    do {
        cout << "\n===== Student Management System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Delete Student";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            sm.addStudent();
            break;
        case 2:
            sm.displayAll();
            break;
        case 3:
            sm.searchStudent();
            break;
        case 4:
            sm.deleteStudent();
            break;
        case 5:
            cout << "\n👋 Exiting...\n";
            break;
        default:
            cout << "\n❗ Invalid Choice!\n";
        }
    } while (choice != 5);

    return 0;
}
