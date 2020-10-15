#include <stdio.h>
#include <stdlib.h>

int main (void){

    float salario, aumento;

    printf("Insira o salário do funcionário: ");
    scanf("%f", &salario);

    // De acordo com o exercício o aumento de salário é de 25%
    aumento = (salario*0.25);
    salario = salario+aumento;

    /*Outra forma de cálculo sem a necessidade da variável aumento seria:
    salario = salario*1.25*/

    printf("O novo valor do salário é de: %.2f", salario);

    return 0;
}
