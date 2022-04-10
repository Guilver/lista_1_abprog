#include <stdio.h>

int main(void) {

  int a, b;
  printf("Esscreva o primeiro numero:\n");
  scanf("%d", &a);
  printf("Esscreva o segundo numero:\n");
  scanf("%d", &b);
  printf(a % b == 0 ? "É multiplo" : "Não é multiplo");

  return 0;
}