#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double x;
    double y;
} Ponto;

int main(int argc, char *argv[])
{
    double somatorio1 = 0;
    double somatorio2 = 0;
    double media_x = 0;
    double media_y = 0;
    double x;
    double y;
    int size = 0;
    char c;

    FILE *arq;
    FILE *arq2;

    arq = fopen(argv[1], "r");
    if (arq == NULL)
    {
        printf("Arquivo nao encontrado");
        return 0;
    }

    while (fscanf(arq, "%lf%c%lf", &x, &c, &y) != EOF)
    {
        size++;
    }
    fclose(arq);

    double arrX = (double *)malloc(size * sizeof(double));
    double arrY = (double *)malloc(size * sizeof(double));
    int index = 0;
    arq = fopen(argv[1], "r");
    while (fscanf(arq, "%lf%c%lf", &x, &c, &y) != EOF)
    {
        arrX[index] = x;
        arrY[index] = y;
        index++;
    }
    fclose(arq);

    // printf("%d", size);

    for (int i = 0; i < size; i++){
        printf("x = %lf, y = %lf", arrX[i], arrY[i]);
    }


    // for ()
    // {
    // }
}
