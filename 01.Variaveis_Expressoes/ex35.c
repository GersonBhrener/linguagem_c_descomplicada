#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

    float hipotenusa, lado_a, lado_b;

    printf("Insira o valor do lado a: \n");
    scanf("%f", &lado_a);

    printf("Insira o valor do lado b: \n");
    scanf("%f", &lado_b);

    hipotenusa = sqrt(pow(lado_a,2)+pow(lado_b,2));

    printf("O valor da hipotenusa é de: %f\n", hipotenusa);

    return 0;

}