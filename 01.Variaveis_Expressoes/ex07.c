#include <stdlib.h>
#include <stdio.h>

int main (void){

  float f, c;

  printf("Insira a temperatura em Fahrenheit: \n");

  scanf("%f", &f);

  c = 5.0*(f-32)/9.0;

  printf("A temperatura em Fahrenheit é de %f graus\n", c);

  return 0;

}
