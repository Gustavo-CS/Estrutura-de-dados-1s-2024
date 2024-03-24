#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int array[argc - 1];

	for (int i = 1; i < argc; i++)
	{
		array[i - 1] = atoi(argv[i]);
	}
	int total = 0;
	int valor2;
	int menor = array[0];
	int maior = array[0];
	int valor;

	for (int i = 0; i < argc - 1; i++)
	{
		valor = array[i];
		total += valor;
		if (menor > valor)
		{
			menor = valor;
		}
		if (maior < valor)
		{
			maior = valor;
		}
	}

	for (int i = 0; i < argc - 1; i++)
	{
		valor = array[i];
		valor2 = array[i];
		for (int j = i; j < argc - 1; j++)
		{
			if (valor > array[j])
			{
				valor2 = array[j];
				array[j] = valor;
				array[i] = valor2;
				valor = valor2;
			}
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