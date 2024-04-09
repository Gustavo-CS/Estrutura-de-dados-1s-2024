#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main(int argc, char *argv[])
{
    FILE *arq;
    FILE *arq2;
    arq = fopen(argv[1], "r");
    if (arq == NULL)
    {
        printf("Arquivo nao encontrado");
        return 0;
    }

    int *ptr;
    int size = 0;
    int txt;

    while (fscanf(arq, "%d", &txt) != EOF)
    {
        size++;
    }
    fclose(arq);

    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
    {
        printf("Erro!\n");
        return 0;
    }
    else
    {

        int h = 0;
        arq = fopen(argv[1], "r");
        while (fscanf(arq, "%d", &txt) != EOF)
        {
            ptr[h] = txt;
            h++;
        }
        fclose(arq);

        bubble_sort(ptr, size);

        int valor2;
        int valor;

        for (int i = 0; i < size; i++)
        {
            valor = ptr[i];
            valor2 = ptr[i];
            for (int j = i; j < size; j++)
            {
                if (valor > ptr[j])
                {
                    valor2 = ptr[j];
                    ptr[j] = valor;
                    ptr[i] = valor2;
                    valor = valor2;
                }
            }
        }

        arq2 = fopen("saida.txt", "w");

        for (int i = 0; i < size; i++)
        {
            fprintf(arq2, "%d\n", ptr[i]);
        }
        fclose(arq2);
    }

    return 0;
}
