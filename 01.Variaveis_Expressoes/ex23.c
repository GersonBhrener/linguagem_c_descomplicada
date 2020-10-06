#include <stdlib.h>
#include <stdio.h>

int main (void){

    float m, j;

    printf("Insira o valor em metros: \n");
    scanf("%f", &m);

    j = m/0.91;

    printf("O em jardas é de: %f\n", j);

    return 0;
}