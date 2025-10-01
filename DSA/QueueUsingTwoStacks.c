// queue using two stacks

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

// Push element into a stack
void push(int stack[], int *top, int value) {
    if (*top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    (*top)++;
    stack[*top] = value;
}

// Pop element from a stack
int pop(int stack[], int *top) {
    if (*top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    int value = stack[*top];
    (*top)--;
    return value;
}

// Enqueue operation (push into stack1)
void enqueue(int value) {
    // Simply push the new element into stack1
    push(stack1, &top1, value);
    printf("Enqueued: %d\n", value);
}

// Dequeue operation (pop from stack2 if not empty, else transfer from stack1)
int dequeue() {
    // If both stacks are empty, queue is empty
    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty\n");
        return -1;
    }

    // If stack2 is empty, transfer all elements from stack1 to stack2
    if (top2 == -1) {
        while (top1 != -1) {
            int temp = pop(stack1, &top1);
            push(stack2, &top2, temp);
            // Example step-by-step:
            // When transferring first element:
            // pop stack1: gets the last pushed element (LIFO)
            // push into stack2: makes it the front of queue
        }
    }

    // Pop from stack2, which gives the front element of the queue
    int dequeued = pop(stack2, &top2);
    printf("Dequeued: %d\n", dequeued);
    return dequeued;
}

int main() {
    // Example usage
    enqueue(10); // push 10
    enqueue(20); // push 20
    enqueue(30); // push 30

    dequeue();   // removes 10
    dequeue();   // removes 20

    enqueue(40); // push 40
    dequeue();   // removes 30
    dequeue();   // removes 40

    return 0;
}

/* Step-by-step explanation:

1. Enqueue 10:
   stack1 = {10}, stack2 = {}
2. Enqueue 20:
   stack1 = {10, 20}, stack2 = {}
3. Enqueue 30:
   stack1 = {10, 20, 30}, stack2 = {}
4. Dequeue:
   stack2 is empty, transfer from stack1 to stack2
   stack1 = {}, stack2 = {30, 20, 10}
   pop from stack2 -> 10 is dequeued
5. Dequeue:
   stack2 = {30, 20}, pop -> 20 is dequeued
6. Enqueue 40:
   stack1 = {40}, stack2 = {30}
7. Dequeue:
   pop from stack2 -> 30 is dequeued
8. Dequeue:
   stack2 is empty, transfer from stack1 to stack2
   stack1 = {}, stack2 = {40}
   pop from stack2 -> 40 is dequeued

Queue implemented successfully using two stacks!
*/
