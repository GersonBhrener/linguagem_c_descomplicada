#include <stdlib.h>
#include <stdio.h>

int main (void){

    int dia;
    float valor_dia = 30, total;

    printf("Insira o número de dias trabalhados: ");
    scanf("%d", &dia);

    total = (dia*valor_dia)*0.92; //Cálculo ja descontando 8% de imposto de renda

    printf("O valor a ser pago é de: %.2f", total);

    return 0;
}