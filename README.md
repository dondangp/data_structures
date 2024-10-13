# Data Structures in C++

This repository contains implementations of fundamental data structures in C++, following the guidelines from the book *Introduction to Algorithms, Third Edition* by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein. The data structures include:

- **Stack** (LIFO - Last In, First Out)
- **Queue** (FIFO - First In, First Out)
- **Singly Linked List** (Dynamic linear data structure)

## Overview

Each data structure is implemented in a separate C++ file to encapsulate its functionality. The repository includes a main driver file (`main.cpp`) that demonstrates the usage of each data structure. The implementations are designed to mimic the interfaces described in the book.

### Stack
A stack is a data structure that follows the **LIFO** principle. It supports the following operations:
- `push(int x)`: Adds an element to the top of the stack.
- `pop()`: Removes the top element from the stack and returns it.
- `peek()`: Returns the top element without removing it.
- `isEmpty()`: Checks whether the stack is empty.

### Queue
A queue is a data structure that follows the **FIFO** principle. It supports the following operations:
- `enqueue(int x)`: Adds an element to the rear of the queue.
- `dequeue()`: Removes the front element from the queue and returns it.
- `isEmpty()`: Checks whether the queue is empty.

### Singly Linked List
A singly linked list is a linear data structure where each node points to the next node in the sequence. It supports the following operations:
- `insertAtHead(int x)`: Inserts a node containing the value `x` at the head (start) of the list.
- `deleteAtHead()`: Removes the node at the head of the list.
- `display()`: Displays all the elements in the list in order.

## File Structure

- `stack.cpp`: Implementation of the Stack data structure.
- `queue.cpp`: Implementation of the Queue data structure.
- `singly_linked_list.cpp`: Implementation of the Singly Linked List data structure.
- `main.cpp`: Demonstrates the usage of the Stack, Queue, and Singly Linked List.

## How to Compile and Run

You can compile and run the program using a C++ compiler such as `g++`. Follow the steps below:

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/your-username/your-repo-name.git](https://github.com/dondangp/data_structures_C.git
   cd data_structures_C
