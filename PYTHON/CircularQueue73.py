# Write a program to implement a circular queue using arrays with enqueue, dequeue, display.
MAX = 5

class CircularQueue:
    def __init__(self):
        self.queue = [None] * MAX
        self.front = -1
        self.rear = -1

    def enqueue(self, value):
        if (self.rear + 1) % MAX == self.front:
            print("Queue Overflow! Cannot insert", value)
            return
        if self.front == -1:
            self.front = 0
        self.rear = (self.rear + 1) % MAX
        self.queue[self.rear] = value
        print(value, "inserted into the queue.")

    def dequeue(self):
        if self.front == -1:
            print("Queue Underflow! No elements to delete.")
            return
        print("Deleted element:", self.queue[self.front])
        if self.front == self.rear:
            self.front = self.rear = -1
        else:
            self.front = (self.front + 1) % MAX

    def display(self):
        if self.front == -1:
            print("Queue is empty.")
            return
        print("Queue elements:", end=" ")
        i = self.front
        while True:
            print(self.queue[i], end=" ")
            if i == self.rear:
                break
            i = (i + 1) % MAX
        print()

def main():
    q = CircularQueue()
    while True:
        print("\n--- Circular Queue Menu ---")
        print("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit")
        choice = int(input("Enter your choice: "))
        if choice == 1:
            value = int(input("Enter value to insert: "))
            q.enqueue(value)
        elif choice == 2:
            q.dequeue()
        elif choice == 3:
            q.display()
        elif choice == 4:
            print("Exiting program.")
            break
        else:
            print("Invalid choice! Try again.")

if __name__ == "__main__":
    main()
