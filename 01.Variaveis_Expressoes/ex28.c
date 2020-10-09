#include <stdlib.h>
#include <stdio.h>
#include <math.h> //Utilizado para funções matemática pré-definidas

int main (void){

    int v1, v2, v3, q1, q2, q3, soma;

    printf("Insira três valores inteiros: \n");
    scanf("%d%d%d", &v1, &v2, &v3);

    /* Utiliza-se a função pow para cálculo de potências.
    A operação (variável*variável) também é valida. Ex: (v1*v1)*/

    q1 = pow(v1,2);
    q2 = pow(v2,2);
    q3 = pow(v3,2);

    soma = (q1+q2+q3);

    printf("A soma dos quadrados dos números inseridos é de: %d", soma);

    return 0;

}