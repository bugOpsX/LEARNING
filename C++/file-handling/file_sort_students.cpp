#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <stdexcept>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

// Comparison function for sorting
bool compareByMarks(const Student &a, const Student &b) {
    return a.marks > b.marks; // descending order
}

int main() {
    vector<Student> students;
    ifstream fin;
    ofstream fout;
    int n;

    try {
        fin.open("students.txt");
        if (!fin)
            throw runtime_error("Error: Input file not found or cannot be opened!");

        fin >> n;
        if (fin.fail() || n <= 0)
            throw runtime_error("Error: Invalid number of students in file!");

        Student s;
        for (int i = 0; i < n; ++i) {
            fin >> s.name >> s.roll >> s.marks;
            if (fin.fail())
                throw runtime_error("Error: Invalid data format in input file!");
            students.push_back(s);
        }
        fin.close();

        // Sort the students by marks
        sort(students.begin(), students.end(), compareByMarks);

        fout.open("sorted_students.txt");
        if (!fout
            throw runtime_error("Error: Could not create output file!");

        fout << "Sorted Student List (Highest to Lowest Marks):\n\n";
        for (const auto &st : students)
            fout << "Name: " << st.name
                 << "\tRoll: " << st.roll
                 << "\tMarks: " << st.marks << endl;

        fout.close();
        cout << "✅ Students sorted successfully. Check 'sorted_students.txt'.\n";
    }

    catch (const exception &e) {
        cerr << e.what() << endl;
        return 1; // exit with error code
    }

    return 0;
}
