#include <stdlib.h>
#include <stdio.h>

int main (void){

  float num, quad;

  printf("Insira um número real: \n");

  scanf("%f", &num);

  quad = (num*num);

  printf("O quadrado do número é: %f\n", quad);

  return 0;

}
