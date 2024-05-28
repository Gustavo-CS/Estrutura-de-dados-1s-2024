#include <stdio.h>
#include <stdlib.h>
#include "queue.h"


int main(){
    QueueNode *root =NULL;
    enqueue(&root, 'A');
    enqueue(&root, 'B');
    enqueue(&root, 'C');
    enqueue(&root, 'D');

    printf("%c \n", peek(root));
    printf("%c \n", dequeue(&root));
    display(root);

    // printf("%c %c %c %c %c \n", dequeue(&root), 
    // dequeue(&root), dequeue(&root), dequeue(&root), dequeue(&root));
}