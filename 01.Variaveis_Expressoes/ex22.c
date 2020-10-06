#include <stdlib.h>
#include <stdio.h>

int main (void){

    float m, j;

    printf("Insira o valor em jardas: \n");
    scanf("%f", &j);

    m = 0.91*j;

    printf("O em metros é de: %f\n", m);

    return 0;
}