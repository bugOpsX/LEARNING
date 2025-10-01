// stack using two queues

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int queue1[MAX], queue2[MAX];
int front1 = 0, rear1 = -1;
int front2 = 0, rear2 = -1;

// Enqueue operation for a queue
void enqueue(int queue[], int *rear, int value) {
    if (*rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    (*rear)++;
    queue[*rear] = value;
}

// Dequeue operation for a queue
int dequeue(int queue[], int *front, int *rear) {
    if (*front > *rear) {
        printf("Queue Underflow\n");
        return -1;
    }
    int value = queue[*front];
    (*front)++;
    return value;
}

// Check if queue is empty
int isEmpty(int front, int rear) {
    return front > rear;
}

// Reset queue
void resetQueue(int *front, int *rear) {
    *front = 0;
    *rear = -1;
}

// Push operation for stack using two queues
void push(int value) {
    // Enqueue new element into queue2
    enqueue(queue2, &rear2, value);

    // Move all elements from queue1 to queue2
    while (!isEmpty(front1, rear1)) {
        int temp = dequeue(queue1, &front1, &rear1);
        enqueue(queue2, &rear2, temp);
    }

    // Copy queue2 into queue1
    int size = rear2 - front2 + 1;
    for (int i = 0; i < size; i++) {
        queue1[i] = queue2[front2 + i];
    }
    front1 = 0;
    rear1 = size - 1;

    // Reset queue2
    resetQueue(&front2, &rear2);

    printf("Pushed: %d\n", value);
}

// Pop operation for stack
int pop() {
    if (isEmpty(front1, rear1)) {
        printf("Stack is empty\n");
        return -1;
    }
    int value = dequeue(queue1, &front1, &rear1);
    printf("Popped: %d\n", value);
    return value;
}

int main() {
    // Example usage
    push(10);   // push 10
    push(20);   // push 20
    push(30);   // push 30

    pop();      // removes 30
    pop();      // removes 20

    push(40);   // push 40
    pop();      // removes 40
    pop();      // removes 10

    return 0;
}

/* Step-by-step explanation:

1. Push 10:
   queue2 = {10}, queue1 = {}
   Swap -> queue1 = {10}, queue2 = {}
2. Push 20:
   queue2 = {20}
   Move all from queue1 to queue2 -> queue2 = {20, 10}, queue1 = {}
   Swap -> queue1 = {20, 10}, queue2 = {}
3. Push 30:
   queue2 = {30}
   Move all from queue1 to queue2 -> queue2 = {30, 20, 10}, queue1 = {}
   Swap -> queue1 = {30, 20, 10}, queue2 = {}
4. Pop:
   dequeue from queue1 -> 30 is popped
5. Pop:
   dequeue from queue1 -> 20 is popped
6. Push 40:
   queue2 = {40}
   Move all from queue1 to queue2 -> queue2 = {40, 10}, queue1 = {}
   Swap -> queue1 = {40, 10}, queue2 = {}
7. Pop:
   dequeue from queue1 -> 40 is popped
8. Pop:
   dequeue from queue1 -> 10 is popped

Stack implemented successfully using two queues!
*/
