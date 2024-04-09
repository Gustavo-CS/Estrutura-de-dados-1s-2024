#include <stdio.h>

#include <stdlib.h>
typedef struct myDados
{
    int x;
    int y;
} myDados;

int main()
{
    myDados teste[5];
    teste[0].x = 5;
    teste[0].y = 6;
    printf("%d,%d",teste[0].x, teste[0].y);
}