#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

No *no(char valor, No *proximo_no)
{
    No *no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void inserir_no(No *H, No *no)
{
    if (H != NULL)
    {
        if (H->proximo_no == NULL)
        {
            H->proximo_no = no;
        }
        else
        {
            inserir_no(H->proximo_no, no);
        }
    }
}

void imprimir_list(No *H)
{
    if (H != NULL)
    {
        printf("%c\t", H->valor);
        imprimir_list(H->proximo_no);
    }
}

int quantidade_nos(No *H)
{
    if (H != NULL)
    {
        return 1 + quantidade_nos(H->proximo_no);
    }
    return 0;
}

No *copiar_list(No *H)
{
    if (H != NULL)
    {
        return no(H->valor, copiar_list(H->proximo_no));
    }
    else
    {
        return NULL;
    }
}

void liberar_lista(No *H)
{
    if (H != NULL)
    {
        liberar_lista(H->proximo_no);
        free(H);
        H = NULL;
    }
}
