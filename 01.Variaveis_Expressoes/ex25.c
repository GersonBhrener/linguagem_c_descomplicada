#include <stdlib.h>
#include <stdio.h>

int main (void){

    float acres, metrosquad;

    printf("Insira o valor em acres: \n");
    scanf("%f", &acres);

    metrosquad = acres*4048.58;

    printf("O valor em metros quadrados é de: %f", metrosquad);

    return 0;
}