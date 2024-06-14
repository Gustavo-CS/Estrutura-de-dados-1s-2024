#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"


int main(void)
{
    int i = 0;
}

void in_order(Node *node)
{
    if (node != NULL)
    {
        if (node->left != NULL){
            in_order(node->left);
        }
        printf("%d", node->data);
    }
}