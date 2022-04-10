#include <stdio.h>

int main(void) {

  float valor, total;
  printf("Insira o valor a ser pago:\n");
  scanf("%f", &valor);

  total = valor + (valor * 10/100);
  printf("\nValor: R$ %.2f\nTotal: R$ %.2f\n", valor, total);

  return 0;
}