#include "stack.cpp"
#include "queue.cpp"
#include "singly_linked_list.cpp"

int main() {
    // Stack demonstration
    Stack stack;
    stack.push(10);
    stack.push(20);
    std::cout << "Stack top: " << stack.peek() << "\n";
    stack.pop();
    std::cout << "Stack top after pop: " << stack.peek() << "\n";

    // Queue demonstration
    Queue queue;
    queue.enqueue(30);
    queue.enqueue(40);
    std::cout << "Queue front after enqueue: " << queue.dequeue() << "\n";

    // Singly Linked List demonstration
    SinglyLinkedList list;
    list.insertAtHead(50);
    list.insertAtHead(60);
    list.display();
    list.deleteAtHead();
    list.display();

    return 0;
}
