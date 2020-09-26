#include <stdlib.h>
#include <stdio.h>

int main (void){

  float k, c;

  printf("Insira a temperatura em Kelvin: \n");

  scanf("%f", &k);

  c = k-273.15;

  printf("A temperatura em Fahrenheit é de %f graus\n", c);

  return 0;

}
