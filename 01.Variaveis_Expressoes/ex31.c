#include <stdlib.h>
#include <stdio.h>

int main (void){

    int n, antecessor, sucessor;

    printf("Insira um número inteiro: ");
    scanf("%d", &n);

    antecessor = n-1;
    sucessor = n+1;

    printf("O antecessor de %d é o número %d.\n", n, antecessor);
    printf("O sucessor de %d é o número %d.", n, sucessor);

    return 0;

}
