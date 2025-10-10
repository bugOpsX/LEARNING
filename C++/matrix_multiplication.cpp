#include <iostream>
using namespace std;

// Function to multiply two matrices
void multiplyMatrices(int A[10][10], int B[10][10], int result[10][10],
                      int r1, int c1, int r2, int c2) {
    // Initialize result matrix with 0
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[10][10], B[10][10], result[10][10];
    int r1, c1, r2, c2;

    // Input dimensions of Matrix A
    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    // Input dimensions of Matrix B
    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    if (c1 != r2) {
        cout << "❌ Matrix multiplication not possible! (Columns of A != Rows of B)" << endl;
        return 0;
    }

    // Input elements of Matrix A
    cout << "\nEnter elements of Matrix A:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    // Input elements of Matrix B
    cout << "\nEnter elements of Matrix B:\n";
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    // Multiply the matrices
    multiplyMatrices(A, B, result, r1, c1, r2, c2);

    // Display Result
    cout << "\n✅ Resultant Matrix:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
