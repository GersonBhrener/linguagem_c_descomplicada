#include <stdlib.h>
#include <stdio.h>

int main (void){

  float kms, ms;

  printf("Insira a velocidade em Km/h: \n");

  scanf("%f", &kms);

  ms = kms/3.6;

  printf("A velocidade em m/s  é de %f \n", ms);

  return 0;

}
