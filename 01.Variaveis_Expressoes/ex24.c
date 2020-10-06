#include <stdlib.h>
#include <stdio.h>

int main (void){

    float acres, metrosquad;

    printf("Insira o valor em metros quadrados: \n");
    scanf("%f", &metrosquad);

    acres = metrosquad*0.0000247;

    printf("O valor em acres é de: %f", acres);

    return 0;

}