#include <stdlib.h>
#include <stdio.h>

int main (void){

    float lado, area;

    printf("Insira o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado*lado;

    printf("A área do quadrado é de: %f", area);

    return 0;

}
