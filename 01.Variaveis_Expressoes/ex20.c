#include <stdlib.h>
#include <stdio.h>

int main (void){

  float k, l;

  printf("Insira um valor em quilogramas: \n");

  scanf("%f", &k);

  l = k/0.45;

  printf("O valor em libras é de: %f\n", l);

  return 0;

}
