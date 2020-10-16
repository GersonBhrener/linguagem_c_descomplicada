#include <stdio.h>
#include <stdlib.h>

int main (void){

    float salario;

    printf("Insira o salário-base do trabalhador: ");
    scanf("%f", &salario);

    salario = (salario*1.05)*0.93; //1o Calculo - Gratificação de 5% & 2o Cálculo - Deduçao de 7% em Imposto de Renda

    printf("O salário líquido é de: %f", salario);

    return 0;
}