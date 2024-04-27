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

int lista_verificar_existencia(No *H, char valor_busca)
{
    if (H != NULL)
    {
        if (H->valor == valor_busca)
        {
            return 1;
        }
        return lista_verificar_existencia(H->proximo_no, valor_busca);
    }
    return 0;
}

int lista_verificar_ocorrencia(No *H, char valor_busca)
{
    if (H != NULL)
    {
        // printf("bbbbbbbbbbbb");
        if (H->valor == valor_busca)
        {
            // printf("aaaaaa");
            return 1 + lista_verificar_ocorrencia(H->proximo_no, valor_busca);
        }
        return 0 + lista_verificar_ocorrencia(H->proximo_no, valor_busca);
    }

    return 0;
}

// No *passar_no(No *H){
//     return H->proximo_no;
// }

// void lista_inserir_no_i(No *H, No *no, int i)
// {
//     if (H != NULL)
//     {

//         // if(H->valor == valor_busca){
//         //     return 1;
//         // }
//         // return lista_verificar_existencia(H->proximo_no, valor_busca);
//         // No *x = copiar_list(H->proximo_no);
//         if (i==0);
//         {
//             printf("aaaaaa");
//             // return;
//         }
//         else {
//             lista_inserir_no_i(H->proximo_no, no, i);
//         }

//         // for (int j = 0; j < i; j++)
//         // {
//         //     copiar_list(x->proximo_no);

//         //     if (x->proximo_no != NULL)
//         //     {
//         //         // x->valor=H->valor;
//         //         if (j == i)
//         //         {
//         //             H->valor = no->valor;
//         //             no->proximo_no = H->proximo_no;
//         //         }
//         //     }
//         // }
//     }
// }
