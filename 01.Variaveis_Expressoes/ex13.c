#include <stdlib.h>
#include <stdio.h>

int main (void){

  float k, m;

  printf("Insira a distância em quilômetros: \n");
  scanf("%f", &k);

  m = k/1.61;

  printf("A distância em milhas é de: %f\n", m);

  return 0;

}
