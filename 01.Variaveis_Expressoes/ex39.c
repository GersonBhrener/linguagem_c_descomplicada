#include <stdlib.h>
#include <stdio.h>

int main (void){

    float premio, ganhador1, ganhador2, ganhador3;

    premio = 780000;
    ganhador1 = premio*0.46;
    ganhador2 = premio*0.32;
    ganhador3 = premio - (ganhador1+ganhador2);

    printf("O valor recebido pelo 1o Ganhador é de: %.2f\n", ganhador1);
    printf("O valor recebido pelo 2o Ganhador é de: %.2f\n", ganhador2);
    printf("O valor recebido pelo 3o Ganhador é de: %.2f\n", ganhador3);

    return 0;

}