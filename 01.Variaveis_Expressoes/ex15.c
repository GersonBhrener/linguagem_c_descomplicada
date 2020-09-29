#include <stdlib.h>
#include <stdio.h>

#define PI 3.14

int main (void){

  float r, g;

  printf("Insira a medida do ângulo em radianos: \n");
  scanf("%f", &r);

  g = r*180/PI;

  printf("A medida do ângulo em graus é de: %f\n", g);

  return 0;

}
