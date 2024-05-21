#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    StackNode* top = NULL;
    push(&top, 'A');
    push(&top, 'B');
    push(&top, 'C');
    // printf("%c ", pop(&top));
    // printf("%c ", pop(&top));
    // printf("%c ", pop(&top));
    // printf("%c ", pop(&top));
    // printf("%c ", pop(&top));
    // printf("%c ", pop(&top));
    // printf("%c ", pop(&top));
    // printf("%c ", pop(&top));
    // printf("%c ", peek(top));
    display(top);
    exit(0);
}