#include <stdlib.h>
#include <stdio.h>

int main (void){

  float m, l;

  printf("Insira o valor em litros: \n");

  scanf("%f", &l);

  m = l/1000;

  printf("O valor em metros cúbicos é de: %f\n", m);

  return 0;

}
