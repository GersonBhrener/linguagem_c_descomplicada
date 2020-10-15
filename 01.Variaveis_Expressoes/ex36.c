#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main (void){

    float volume, raio, altura;

    printf("Insira o valor do raio do cilindro: ");
    scanf("%f", &raio);

    printf("Insira o valor da altura do cilindro: ");
    scanf("%f", &altura);

    volume = PI*pow(raio,2)*altura;

    printf("O volume do cilíndro é de: %f", volume);

    return 0;

}