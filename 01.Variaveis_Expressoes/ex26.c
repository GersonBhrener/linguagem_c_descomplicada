#include <stdlib.h>
#include <stdio.h>

int main (void){

    float hectares, metrosquad;

    printf("Insira os valores em metro quadrado: \n");
    scanf("%f", &metrosquad);

    hectares = metrosquad*0.0001;

    printf("O valor em hectares é de: %f", hectares);

    return 0;
}

