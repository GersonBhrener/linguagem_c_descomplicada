#include <stdlib.h>
#include <stdio.h>

int main (void){

    float real, dolar, cotacao;

    printf("Insira o valor em Reais: ");
    scanf("%f", &real);

    printf("Insira o valor da cotação do Dólar: ");
    scanf("%f", &cotacao);

    printf("\n\n");

    dolar = real/cotacao;

    printf("O valor é de %f dólares\n", dolar);

    return 0;
}
