#include <stdlib.h>
#include <stdio.h>

int main (void){

    float hectares, metrosquad;

    printf("Insira os valores em hectares: \n");
    scanf("%f", &hectares);

    metrosquad = hectares*10000;

    printf("O valor em metros quadrados é de: %f", metrosquad);

    return 0;
}
