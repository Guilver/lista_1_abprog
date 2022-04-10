#include <stdio.h>

int main(void) {
  float real, cotacao;
  printf("Cotação do dolar:\n");
  scanf("%f", &cotacao);
  printf("Valor:\n");
  scanf("%f", &real);
  printf("Conversão em dolar: %.2f\n", real*cotacao);
  return 0;
}