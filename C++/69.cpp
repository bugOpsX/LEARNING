//Write a C++ program to implement stack using array.

#include <iostream>
using namespace std;

class Stack {
    int top;
    int capacity;
    int* arr;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    void display() {
        for (int i = 0; i <= top; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;
    Stack s(n);
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.push(val);
    }
    s.display();
    s.pop();
    s.display();
    cout << "Top element: " << s.peek() << endl;
    return 0;
}