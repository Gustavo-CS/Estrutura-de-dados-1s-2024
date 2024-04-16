#include <stdio.h>

#include <stdlib.h>

int main(){
    int a = 2;
    int b = a;
    int *p = &a;
    int *h = &a;

    printf("a = %d, b = %d\n", a, b);
    printf("a = %p, b = %p\n", &a, &b);
    b=3;
    printf("a = %d, b = %d\n", a, b);
    a=4;
    printf("a = %d, b = %d\n", a, b);

    printf("&p = %p, p = %p, *p = %d\n", &p, p, *p);
    printf("&h = %p, h = %p, *h = %d\n", &h, h, *h);

    *p = 50;
    
    printf("a = %d, b = %d\n", a, b);
    printf("&p = %p, p = %p, *p = %d\n", &p, p, *p);
    printf("&h = %p, h = %p, *h = %d\n", &h, h, *h);


    p = malloc(sizeof(int)*5);
    p[0]=12;
    p[1]=15;
    
    printf("a = %d, b = %d\n", a, b);
    printf("&p = %p, p = %p, *p = %d\n", &p, p, *p);
    printf("&p = %p, p = %p, *p = %d\n", &p, &p[1], p[1]);
    printf("&h = %p, h = %p, *h = %d\n", &h, h, *h);

}