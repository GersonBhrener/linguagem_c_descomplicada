#include <stdlib.h>
#include <stdio.h>

int main (void){

  float cm, pol;

  printf("Insira o valor em polegadas: \n");
  scanf("%f", &pol);

  cm = pol*2.54;

  printf("O valor em centímetros é de: %f\n", cm);

  return 0;

}
