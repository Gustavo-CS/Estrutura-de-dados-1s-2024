#include <stdio.h>
#include <stdlib.h>
// #include "bubble_sort.h"
#include "quick_sort.h"

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

    int *arr;
    int size = 0;
    int txt;

    while (fscanf(arq, "%d", &txt) != EOF)
    {
        size++;
    }
    fclose(arq);

    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
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
            arr[h] = txt;
            h++;
        }
        fclose(arq);

        // bubble_sort(arr, size);
        quickSort(0,size-1,arr);

        arq2 = fopen("saida.txt", "w");

        for (int i = 0; i < size; i++)
        {
            fprintf(arq2, "%d\n", arr[i]);
        }
        fclose(arq2);
    }

    return 0;
}
