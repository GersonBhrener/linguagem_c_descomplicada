#include <stdlib.h>
#include <stdio.h>

int main (void){

  float k, c;

  printf("Insira a temperatura em Celsius: \n");

  scanf("%f", &c);

  k = c+273.15;

  printf("A temperatura em Kelvin é de %f graus\n", k);

  return 0;

}
