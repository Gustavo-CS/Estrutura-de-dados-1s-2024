#include <stdio.h>
#include <stdlib.h>
#include "lista_ligada.h"

int main(int argc, char *argv[])
{
    No *n1 = no('A', NULL);
    No *n2 = no('B', NULL);
    No *n3 = no('C', NULL);
    No *n4 = no('A', NULL);
    No *n5 = no('H', NULL);

    n1->proximo_no = n2;
    n2->proximo_no = n3;
    n3->proximo_no = n4;

    No *h = n1;

    inserir_no(h, n5);
    printf("lista apos inserir o no n5:\t");
    imprimir_list(h);

    printf("\ntamanho da lista = %d\n", quantidade_nos(h));

    No *copia = copiar_list(h);

    printf("lista copiada:\t");
    imprimir_list(copia);
    printf("\n");

    liberar_lista(copia);

    if (lista_verificar_existencia(h, 'B') == 0)
    {
        printf("B nao esta na lista");
    }
    else
    {
        printf("B esta na lista\n");
    }

    printf("a letra B aparece %d vezes\n", lista_verificar_ocorrencia(h, 'B'));

    printf("lista invertida:\t");
    lista_imprimir_inversa(h);

    lista_inserir_no_i(h, no('G', NULL), 2);
    printf("\n");
    printf("lista apos inserir o no G no indice 2:\t");
    imprimir_list(h);

    lista_remover_no_i(h, 1);
    printf("\n");
    printf("lista apos remover o no no indice 1:\t");
    imprimir_list(h);

    lista_remover_no(h, 'A');
    printf("\n");
    printf("lista apos remover os nos A:\t");
    imprimir_list(h);

    exit(0);
}