#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.141592


int main (void){

    float area, raio;

    printf("Insira o valor de raio do círculo: \n");
    scanf("%f", &raio);

    area = raio*pow(PI,2);

    printf("O valor da área do círculo é de: %f\n", area);

    return 0;

}