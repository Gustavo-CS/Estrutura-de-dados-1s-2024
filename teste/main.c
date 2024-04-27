#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(int argc,char *argv[]) {
    No* n1 = no('A', NULL);
    No* n2 = no('B', NULL);
    No* n3 = no('C', NULL);
    No* n4 = no('B', NULL);

    n1->proximo_no = n2;
    n2->proximo_no = n3;
    n3->proximo_no = n4;

    No* h = n1;
    // No* h;

    // inserir_no(h, n4);

    // lista_inserir_no_i(h, n4, 1);

    // imprimir_list(h);
    
    // No* h2 = copiar_list(h);

    // imprimir_list(h);

    // liberar_lista(h2);

    // printf("\nqnt = %d \n", quantidade_nos(h));
    // printf("\nqnt = %d \n", quantidade_nos(h2));

    printf("%d",lista_verificar_ocorrencia(h, 'B'));
    // if(lista_verificar_existencia(h, 'B') == 0){
    //     printf("B nao esta na lista");
    // }
    // else {
    //     printf("B esta na lista");

    // }

    
    // do
    // {
    //     printf("%c \t", h->valor);
    //     h = h->proximo_no;
    // } while (h != NULL);
    
    
    // printf("n1 = %c \t n2 = %c", n1->valor, n2->valor);

    exit(0);
}