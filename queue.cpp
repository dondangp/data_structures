#include <iostream>
#define MAX 100

class Queue {
private:
    int data[MAX];
    int front, rear;

public:
    // Constructor to initialize the queue
    Queue() : front(0), rear(0) {}

    // Enqueue method as described in the book
    bool enqueue(int x) {
        if ((rear + 1) % MAX == front) {
            std::cout << "Queue Overflow\n";
            return false;
        } else {
            data[rear] = x;
            rear = (rear + 1) % MAX;
            return true;
        }
    }

    // Dequeue method as described in the book
    int dequeue() {
        if (rear == front) {
            std::cout << "Queue Underflow\n";
            return -1;
        } else {
            int val = data[front];
            front = (front + 1) % MAX;
            return val;
        }
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == rear;
    }
};
