#include <stdlib.h>
#include <stdio.h>

int main (void){

  float num, quinta;

  printf("Insira um número real: \n");

  scanf("%f", &num);

  quinta = (num/5);

  printf("A quinta parte do número é: %f\n", quinta);

  return 0;
}
