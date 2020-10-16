#include <stdio.h>
#include <stdlib.h>

int main (void){

    int hora_trabalho, horas_trabalhadas;
    float total;

    printf("Insira o valor da hora/trabalho a ser paga: ");
    scanf("%d", &hora_trabalho);

    printf("Insira as horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);

    total = ((hora_trabalho*horas_trabalhadas)*1.10); //Acréscimo de 10%

    printf("O valor total a ser pago é de: %.2f\n", total);

    return 0;
}