#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int array[5] = {};

    int tam = sizeof(array) / sizeof(array[0]);
    printf("%d", tam);


}