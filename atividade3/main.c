#include <stdio.h>
#include <stdlib.h>

void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

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
    int size;
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

        quickSort(ptr, 0, size - 1);

        arq2 = fopen("saida.txt", "w");

        for (int i = 0; i < size; i++)
        {
            fprintf(arq2, "%d\n", ptr[i]);
        }
        fclose(arq2);
    }

    return 0;
}
