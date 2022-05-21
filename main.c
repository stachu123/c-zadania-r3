#include <stdio.h>
#include <stdlib.h>

double zadanie3(int(*fun)(int arg),int (*fun2)(int arg), unsigned int a){
    return fun(a);

double * zadanie2(){
    return malloc(sizeof(double))
}

int main()
{
    int N;

    printf("podaj wielkosc tablicy\n");
    scanf("%d", &N);

    double *a = malloc(N * sizeof(int));
    double b = a[0];
    printf("wskaznik to %p", &b);
    return 0;
}
