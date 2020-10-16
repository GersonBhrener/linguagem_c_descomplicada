#include <stdio.h>
#include <stdlib.h>

int main (void){

    float valor_produto, total_com_desconto, valor_parcela, comissao_avista, comissao_parcelado;

    printf("Insira o valor do produto ou total das compras: ");
    scanf("%f", &valor_produto);

    printf("\n\n");

    total_com_desconto = valor_produto*0.9;
    valor_parcela = valor_produto/3;
    comissao_avista = total_com_desconto*0.05;
    comissao_parcelado = valor_produto*0.05;

    printf("O valor para pagamento à vista com desconto é de: %.2f\n", total_com_desconto);
    printf("O valor do parcelamento será de 3x de %.2f\n", valor_parcela);
    printf("Sua comissão em caso de venda à vista será de %.2f\n", comissao_avista);
    printf("Sua comissão em caso de venda parcelada será de %.2f\n", comissao_parcelado);

    return 0;

}
