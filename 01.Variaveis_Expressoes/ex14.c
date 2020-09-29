#include <stdlib.h>
#include <stdio.h>

#define PI 3.14

int main (void){

  float r, g;

  printf("Insira a medida do ângulo em graus: \n");
  scanf("%f", &g);

  r = g*PI/180;

  printf("A medida do ângulo em radianos é de: %f\n", r);

  return 0;

}
