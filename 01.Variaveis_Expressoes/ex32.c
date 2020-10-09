#include <stdio.h>
#include <stdlib.h>

int main (void){

    int n, antecessor, sucessor, soma;

    printf("Insira um número inteiro: ");
    scanf("%d", &n);

    sucessor = (3*n)+1;
    antecessor = (2*n)-1;

    soma = sucessor+antecessor;

    printf("A soma total é de: %d", soma);

    return 0;

}