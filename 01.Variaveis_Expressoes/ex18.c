#include <stdlib.h>
#include <stdio.h>

int main (void){

  float l, m;

  printf("Insira o valor em metros cúbicos: \n");
  scanf("%f", &m);

  l = 1000*m;

  printf("O valor em metros cúbicos é de: %f\n", l);

  return 0;

}
