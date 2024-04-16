#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(int argc,char *argv[]) {
    No* n1 = no('A', NULL);
    No* n2 = no('B', NULL);
    No* n3 = no('C', NULL);
    No* n4 = no('D', NULL);

    n1->proximo_no = n2;
    n2->proximo_no = n3;

    No* h = n1;
    // No* h;

    inserir_no(h, n4);

    // imprimir_list(h);
    
    No* h2 = copiar_list(h);

    imprimir_list(h2);

    liberar_lista(h2);

    printf("\nqnt = %d", quantidade_nos(h));
    printf("\nqnt = %d", quantidade_nos(h2));

    // do
    // {
    //     printf("%c \t", h->valor);
    //     h = h->proximo_no;
    // } while (h != NULL);
    
    
    // printf("n1 = %c \t n2 = %c", n1->valor, n2->valor);

    exit(0);
}