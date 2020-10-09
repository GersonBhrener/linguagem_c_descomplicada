#include <stdio.h>
#include <stdlib.h>

int main (void){

    float nota1, nota2, nota3, nota4, media;

    printf("Insira as quatro notas: \n");
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    printf("A média das notas é de: %f", media);

    return 0;
}