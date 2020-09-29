#include <stdlib.h>
#include <stdio.h>

int main (void){

  float k, m;

  printf("Insira a distância em milhas: \n");
  scanf("%f", &m);

  k = 1.61*m;

  printf("A distância em quilômetros é de: %f\n", k);

  return 0;

}
