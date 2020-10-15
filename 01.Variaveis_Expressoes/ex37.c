#include <stdlib.h>
#include <stdio.h>

int main (void){

  float p_atual, p_desconto, desconto;

  printf("Insira o valor atual do produto: ");
  scanf("%f", &p_atual);

//Desconto de 12% de acordo com o exercício
  desconto = (p_atual*0.12);
  p_desconto = p_atual-desconto;

/*Outra possibilidade de cálculo sem utlização da variável desconto:
p_desconto = (p_atual*0.88)*/

  printf("O valor com desconto é de: %f", p_desconto);

  return 0;
}
