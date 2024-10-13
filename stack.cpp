#include <iostream>
#define MAX 100

class Stack {
private:
    int data[MAX];
    int top;

public:
    // Constructor to initialize the stack
    Stack() : top(-1) {}

    // Push method as described in the book
    bool push(int x) {
        if (top >= (MAX - 1)) {
            std::cout << "Stack Overflow\n";
            return false;
        } else {
            data[++top] = x;
            return true;
        }
    }

    // Pop method as described in the book
    int pop() {
        if (top < 0) {
            std::cout << "Stack Underflow\n";
            return -1;
        } else {
            return data[top--];
        }
    }

    // Peek method to get the top element
    int peek() {
        if (top < 0) {
            std::cout << "Stack is Empty\n";
            return -1;
        } else {
            return data[top];
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};
