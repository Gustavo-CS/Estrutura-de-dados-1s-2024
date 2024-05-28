#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (front == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Inserted %d\n", value);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(30);
    enqueue(30);
    enqueue(30);
    printf("\n%d", rear->data);
    return 0;
}