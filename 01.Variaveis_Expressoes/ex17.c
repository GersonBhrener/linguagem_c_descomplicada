#include <stdlib.h>
#include <stdio.h>

int main (void){

  float cm, pol;

  printf("Insira o valor em centímetros: \n");
  scanf("%f", &cm);

  pol = cm/2.54;

  printf("O valor em polegadas é de: %f\n", pol);

  return 0;

}
