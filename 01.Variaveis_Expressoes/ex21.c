#include <stdlib.h>
#include <stdio.h>

int main (void){

  float q, l;

  printf("Insira o valor de massa em libras: \n");

  scanf("%f", &q);

  l = q*0.45;

  printf("O valor em quilogramas é de: %f\n", l);

  return 0;

}
