#include <stdio.h>

int main(void) {
  int n1, n2;
  printf("Numero 1:\n");
  scanf("%d", &n1);
  printf("Numero 2:\n");
  scanf("%d", &n2);

printf("Soma: %d\nProduto: %d\nDiferenca: %d\nQuociente: %.2f\nResto da divisão: %d\n",n1 + n2, n1 * n2, n1 - n2, (float)n1 / n2, n1 % n2);

  return 0;
}