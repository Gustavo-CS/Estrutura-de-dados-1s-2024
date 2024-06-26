#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tabela_hash.h"

int hash(char *chave)
{
    return (toupper(chave[0])-65)*TAM_ALFABETO+toupper(chave[1])-65;
}

char **tabelaHash()
{
    char** tabela = malloc(sizeof(char*)*TAM_TABELA);

    for(int i = 0; i<TAM_TABELA;i++){
        tabela[i] = malloc(sizeof(char)*TAM_VALOR);
        strcpy(tabela[i], "");
    }
    return tabela;
}

void put(char *chave, char *valor, char **tabela)
{
    strcpy(tabela[hash(chave)], valor);
}

char *get(char *chave, char **tabela)
{
    return tabela[hash(chave)];
}

int contains(char *chave, char **tabela)
{
    int tam = strlen(tabela[hash(chave)]);
    if(tam > 0){
        return 1;
    }
    return 0;
}

void remover(char *chave, char **tabela)
{
    strcpy(tabela[hash(chave)], "");
}