#include <stdio.h>
#include <stdlib.h>

void quicSort(int array3[]) {
        if (sizeof(array3)/sizeof(array3[0]) < 2 ){
            return array3;
        } 
        else {
            int pivo = array3[0];
            int menores[] = array3 <= pivo;
            int maiores[] = array3 > pivo;
            return quicSort(menores) + pivo + quicSort(maiores);
        }
    }

int main(int argc, char *argv[])
{

    int total = 0;
    int menor = atoi(argv[1]);
    int maior = atoi(argv[1]);

    int array[argc - 1];
    int valor;
    int menor2 = 0;
    int array2[argc - 1];

    for (int i = 1; i < argc; i++)
    {
        array2[i-1] = atoi(argv[i]);
    }

    // void ord() {

    // }

    
    // for (int i = 0; i < argc - 1; i++)
    // {
    //     // array
    //     // int tam = sizeof(array) / sizeof(array[0]);

    //     valor = atoi(argv[i + 1]);
    //     for (int j = 0; j < argc - 1; j++)
    //     {

    //         if (valor > atoi(argv[j+1]))
    //         {
    //             menor2+=1;
    //         }
    //     }
    //     // array2[indice] = -1;
    //     array[menor2] = valor;
    // }

    for (int i = 1; i < argc; i++)
    {
        int intarg = atoi(argv[i]);
        total += intarg;
        if (menor > intarg)
        {
            menor = intarg;
        }
        if (maior < intarg)
        {
            maior = intarg;
        }
    }

    float media = (float)total / (argc - 1);
    printf("Quantidade de numeros recebidos: %d\n", argc - 1);
    printf("Valor medio dos numeros: %.2f\n", media);
    printf("Menor numero: %d\n", menor);
    printf("Maior numero: %d\n", maior);
    printf("ordem:");
    for (int i = 0; i < argc - 1; i++)
    {
        printf(" %d", array[i]);
    }
    exit(0);
}