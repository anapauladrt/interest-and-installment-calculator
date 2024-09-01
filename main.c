#include <stdio.h>
#include <stdlib.h>

int main(){

  float preco_tabela, valor_parcela, valor_final;
  int parcelas;
  
  printf("Digite o valor da tabela?");
  scanf("%f", &preco_tabela);

  printf("O pagamento será feito em quantas parcelas?");
  scanf("%d", &parcelas);

  if (parcelas==0 || parcelas==1){

    valor_parcela=0;
    valor_final=preco_tabela-(preco_tabela*0.025);
    printf("\nPREÇO DE TABELA: R$ %.2f\nNUM. DE PARCELAS: %d\nVALOR DE CADA PARCELA: R$ %.2f\nPREÇO TOTAL: R$ %.2f",preco_tabela, parcelas, valor_parcela, valor_final);
  }

  else if (2<=parcelas && parcelas<=5){

    valor_parcela=preco_tabela/parcelas;
    printf("\nPREÇO DE TABELA: R$ %.2f\nNUM. DE PARCELAS: %d\nVALOR DE CADA PARCELA: R$ %.2f\nPREÇO TOTAL: R$ %.2f",preco_tabela, parcelas, valor_parcela, preco_tabela);
    
  }

  else if(6<=parcelas && parcelas<=10){

    valor_parcela=preco_tabela/parcelas;
    float valor_final=(preco_tabela*0.06)+preco_tabela;
    printf("\nPREÇO DE TABELA: R$ %.2f\nNUM. DE PARCELAS: %d\nVALOR DE CADA PARCELA: R$ %.2f\nPREÇO TOTAL(com 6% de juros): R$ %.2f", preco_tabela, parcelas, valor_parcela, valor_final);
    
  }

  else if(11<=parcelas && parcelas<=15){

    valor_parcela=preco_tabela/parcelas;
    float valor_final=(preco_tabela*0.13)+preco_tabela;
    printf("\nPREÇO DE TABELA: R$ %.2f\nNUM. DE PARCELAS: %d\nVALOR DE CADA PARCELA: R$ %.2f\nPREÇO TOTAL(com 13% de juros(com 6/100 de juros): R$        %.2f",preco_tabela, parcelas, valor_parcela, valor_final);
    
  }

  else if (parcelas>15){
    printf("O parcelamento está disponível apenas para um máximo de 15 parcelas.");
  }

  return 0;
}