#include <stdlib.h>
#include <stdio.h>

int main (void){

  float f, c;

  printf("Insira a temperatura em Celsius: \n");

  scanf("%f", &c);

  f = c*(9.0/5.0)+32;

  printf("A temperatura em Fahrenheit é de %f graus\n", f);

  return 0;

}
