#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

int main(){
    char** tabela = tabelaHash();
    put("DF", "Brasilia", tabela);
    put("SE", "Aracaju", tabela);
    put("PB", "Joao Pessoa", tabela);
    put("PA", "Belem", tabela);

    printf("%s\n", get("PB", tabela));
    printf("%s\n", get("SE", tabela));
    printf("%s\n", get("DF", tabela));
    printf("%s\n", get("PA", tabela));

    printf("%d\n",contains("DF", tabela));
    printf("%d\n",contains("PA", tabela));
    remover("DF", tabela);
    printf("%d\n",contains("DF", tabela));
    exit(0);
}