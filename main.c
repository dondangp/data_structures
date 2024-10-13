#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Stack implementation
typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

int isStackFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

int isStackEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int value) {
    if (!isStackFull(s)) {
        s->data[++(s->top)] = value;
    } else {
        printf("Stack Overflow\n");
    }
}

int pop(Stack *s) {
    if (!isStackEmpty(s)) {
        return s->data[(s->top)--];
    } else {
        printf("Stack Underflow\n");
        return -1;
    }
}

// Queue implementation
typedef struct {
    int data[MAX_SIZE];
    int front, rear;
} Queue;

void initQueue(Queue *q) {
    q->front = 0;
    q->rear = 0;
}

int isQueueFull(Queue *q) {
    return (q->rear + 1) % MAX_SIZE == q->front;
}

int isQueueEmpty(Queue *q) {
    return q->rear == q->front;
}

void enqueue(Queue *q, int value) {
    if (!isQueueFull(q)) {
        q->data[q->rear] = value;
        q->rear = (q->rear + 1) % MAX_SIZE;
    } else {
        printf("Queue Overflow\n");
    }
}

int dequeue(Queue *q) {
    if (!isQueueEmpty(q)) {
        int value = q->data[q->front];
        q->front = (q->front + 1) % MAX_SIZE;
        return value;
    } else {
        printf("Queue Underflow\n");
        return -1;
    }
}

// Singly Linked List implementation
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
} LinkedList;

void initList(LinkedList *list) {
    list->head = NULL;
}

void insertAtHead(LinkedList *list, int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = list->head;
    list->head = newNode;
}

void deleteAtHead(LinkedList *list) {
    if (list->head != NULL) {
        Node *temp = list->head;
        list->head = list->head->next;
        free(temp);
    } else {
        printf("List is empty\n");
    }
}

void displayList(LinkedList *list) {
    Node *current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Test stack
    Stack stack;
    initStack(&stack);
    push(&stack, 10);
    push(&stack, 20);
    printf("Popped from stack: %d\n", pop(&stack));

    // Test queue
    Queue queue;
    initQueue(&queue);
    enqueue(&queue, 30);
    enqueue(&queue, 40);
    printf("Dequeued from queue: %d\n", dequeue(&queue));

    // Test linked list
    LinkedList list;
    initList(&list);
    insertAtHead(&list, 50);
    insertAtHead(&list, 60);
    displayList(&list);
    deleteAtHead(&list);
    displayList(&list);

    return 0;
}
