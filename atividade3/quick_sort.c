void swapp(int *n1, int *n2)
{
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void quickSort(int inicio, int fim, int *arr)
{
    if (fim - inicio > 0)
    {
        int pivo = arr[inicio];
        int index = inicio + 1;
        int i = inicio + 1;
        int j = fim;
        while (i <= j)
        {
            if (pivo > arr[i])
            {
                swapp(&arr[i], &arr[index]);
                i++;
                index++;
            }
            else
            {
                swapp(&arr[j], &arr[i]);
                j--;
            }
        }
        swapp(&arr[index - 1], &arr[inicio]);
        quickSort(inicio, index - 2, arr);
        quickSort(index, fim, arr);
    }
}