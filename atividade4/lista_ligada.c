#include <stdio.h>
#include <stdlib.h>
#include "lista_ligada.h"

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
        if (H->valor == valor_busca)
        {
            return 1 + lista_verificar_ocorrencia(H->proximo_no, valor_busca);
        }
        return 0 + lista_verificar_ocorrencia(H->proximo_no, valor_busca);
    }
    return 0;
}

void lista_imprimir_inversa(No *H)
{
    if (H != NULL)
    {
        lista_imprimir_inversa(H->proximo_no);
        printf("%c\t", H->valor);
    }
}

void lista_inserir_no_i(No *H, No *noo, int i)
{
    if (H != NULL && i >= 0)
    {
        if (i == 1)
        {
            noo->proximo_no = H->proximo_no;
            H->proximo_no = noo;
            return;
        }
        else if (i == 0)
        {
            No *aux = no(H->valor, H->proximo_no);
            H->valor = noo->valor;
            noo->valor = aux->valor;
            H->proximo_no = noo;
            noo->proximo_no = aux->proximo_no;
            free(aux);
            return;
        }
        else if (i > 1)
        {
            lista_inserir_no_i(H->proximo_no, noo, i - 1);
        }
    }
    return;
}

void lista_remover_no_i(No *H, int i)
{
    if (H != NULL && i >= 0 && i < quantidade_nos(H))
    {
        if (i == 1)
        {
            No *no_removido = H->proximo_no;
            H->proximo_no = H->proximo_no->proximo_no;
            free(no_removido);
            return;
        }
        else if (i == 0)
        {
            No *no_removido = H->proximo_no;
            H->valor = H->proximo_no->valor;
            H->proximo_no = H->proximo_no->proximo_no;
            free(no_removido);
            return;
        }
        else if (i > 1)
        {
            lista_remover_no_i(H->proximo_no, i - 1);
        }
    }
    return;
}

void lista_remover_no(No *H, char valor_busca)
{
    if (H != NULL && H->proximo_no != NULL)
    {
        if (H->proximo_no->valor == valor_busca)
        {
            No *no_removido = H->proximo_no;
            H->proximo_no = H->proximo_no->proximo_no;
            free(no_removido);
        }
        else if (H->valor == valor_busca)
        {
            No *no_removido = H->proximo_no;
            // H->proximo_no = H->proximo_no->proximo_no;
            H->valor=H->proximo_no->valor;
            H->proximo_no=H->proximo_no->proximo_no;
            free(no_removido);

        }
        
        lista_remover_no(H->proximo_no, valor_busca);
    }
    return;
}
