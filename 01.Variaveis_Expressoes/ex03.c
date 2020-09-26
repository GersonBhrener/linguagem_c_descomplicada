#include <stdlib.h>
#include <stdio.h>

int main (void){

  int a, b, c, soma;

  printf("Insira três número inteiros: \n");

  scanf("%d%d%d", &a, &b, &c);

  soma = (a+b+c);

  printf("A soma dos números é: %d\n", soma);

  return 0;

}
