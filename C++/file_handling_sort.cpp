/*
 * File: file_handling_sort.cpp
 * Description: Program to read student data from a file, sort by marks,
 *              and write sorted data to another file
 * Features: File I/O, Sorting, Exception Handling
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <stdexcept>

using namespace std;

// Student structure to hold student information
struct Student {
    string name;
    int rollNumber;
    float marks;
    
    // Constructor
    Student(string n = "", int r = 0, float m = 0.0) 
        : name(n), rollNumber(r), marks(m) {}
};

// Comparator function to sort students by marks in descending order
bool compareByMarks(const Student& a, const Student& b) {
    return a.marks > b.marks;
}

// Function to read student data from file
vector<Student> readStudentsFromFile(const string& filename) {
    vector<Student> students;
    ifstream inputFile(filename);
    
    // Check if file opened successfully
    if (!inputFile.is_open()) {
        throw runtime_error("Error: Unable to open input file '" + filename + "'");
    }
    
    string line;
    int lineNumber = 0;
    
    // Read file line by line
    while (getline(inputFile, line)) {
        lineNumber++;
        
        // Skip empty lines
        if (line.empty()) continue;
        
        try {
            stringstream ss(line);
            string name;
            int rollNumber;
            float marks;
            
            // Parse the line (format: name rollNumber marks)
            if (!(ss >> name >> rollNumber >> marks)) {
                cerr << "Warning: Invalid data format at line " << lineNumber << endl;
                continue;
            }
            
            // Validate marks range
            if (marks < 0 || marks > 100) {
                cerr << "Warning: Invalid marks value at line " << lineNumber << endl;
                continue;
            }
            
            // Add student to vector
            students.push_back(Student(name, rollNumber, marks));
            
        } catch (const exception& e) {
            cerr << "Warning: Error parsing line " << lineNumber << ": " << e.what() << endl;
        }
    }
    
    inputFile.close();
    
    // Check if any students were read
    if (students.empty()) {
        throw runtime_error("Error: No valid student records found in file");
    }
    
    return students;
}

// Function to write sorted student data to file
void writeStudentsToFile(const vector<Student>& students, const string& filename) {
    ofstream outputFile(filename);
    
    // Check if file opened successfully
    if (!outputFile.is_open()) {
        throw runtime_error("Error: Unable to open output file '" + filename + "'");
    }
    
    // Write header
    outputFile << "========================================" << endl;
    outputFile << "     SORTED STUDENT RECORDS BY MARKS    " << endl;
    outputFile << "========================================" << endl;
    outputFile << endl;
    
    // Write student data
    outputFile << "Rank\tName\t\tRoll No\t\tMarks" << endl;
    outputFile << "----------------------------------------" << endl;
    
    for (size_t i = 0; i < students.size(); i++) {
        outputFile << (i + 1) << "\t" 
                   << students[i].name << "\t\t" 
                   << students[i].rollNumber << "\t\t" 
                   << students[i].marks << endl;
    }
    
    outputFile << "========================================" << endl;
    outputFile.close();
    
    cout << "Successfully wrote " << students.size() << " student records to " << filename << endl;
}

// Function to display students on console
void displayStudents(const vector<Student>& students) {
    cout << "\n========================================" << endl;
    cout << "     SORTED STUDENT RECORDS BY MARKS    " << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Rank\tName\t\tRoll No\t\tMarks" << endl;
    cout << "----------------------------------------" << endl;
    
    for (size_t i = 0; i < students.size(); i++) {
        cout << (i + 1) << "\t" 
             << students[i].name << "\t\t" 
             << students[i].rollNumber << "\t\t" 
             << students[i].marks << endl;
    }
    
    cout << "========================================" << endl;
}

int main() {
    try {
        // File names
        string inputFileName = "students_input.txt";
        string outputFileName = "students_sorted.txt";
        
        cout << "\n=== Student Data Sorting Program ===\n" << endl;
        
        // Step 1: Read student data from input file
        cout << "Reading student data from '" << inputFileName << "'..." << endl;
        vector<Student> students = readStudentsFromFile(inputFileName);
        cout << "Successfully read " << students.size() << " student records." << endl;
        
        // Step 2: Sort students by marks (descending order)
        cout << "\nSorting students by marks..." << endl;
        sort(students.begin(), students.end(), compareByMarks);
        cout << "Sorting completed successfully." << endl;
        
        // Step 3: Display sorted data on console
        displayStudents(students);
        
        // Step 4: Write sorted data to output file
        cout << "\nWriting sorted data to '" << outputFileName << "'..." << endl;
        writeStudentsToFile(students, outputFileName);
        
        cout << "\n=== Program completed successfully! ===\n" << endl;
        
        return 0;
        
    } catch (const runtime_error& e) {
        // Handle runtime errors (file I/O errors, etc.)
        cerr << "\nRuntime Error: " << e.what() << endl;
        return 1;
        
    } catch (const exception& e) {
        // Handle other standard exceptions
        cerr << "\nException: " << e.what() << endl;
        return 1;
        
    } catch (...) {
        // Handle any other unexpected exceptions
        cerr << "\nUnknown error occurred!" << endl;
        return 1;
    }
}

/*
 * Sample Input File Format (students_input.txt):
 * ------------------------------------------------
 * Alice 101 85.5
 * Bob 102 92.3
 * Charlie 103 78.9
 * Diana 104 95.0
 * Eve 105 88.7
 * 
 * Note: Each line should contain: name rollNumber marks
 *       Separated by spaces
 *       Marks should be between 0 and 100
 */
