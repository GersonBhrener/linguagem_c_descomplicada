#include <stdlib.h>
#include <stdio.h>

int main (void){

  float kms, ms;

  printf("Insira a velocidade em m/s: \n");

  scanf("%f", &ms);

  kms = ms*3.6;

  printf("A velocidade em Km/h  é de %f \n", kms);

  return 0;

}
