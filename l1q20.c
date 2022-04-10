#include <stdio.h>

int main(void) {

  int n;
  printf("Esscreva um numero:\n");
  scanf("%d", &n);
  printf(n % 2 == 0 ? "Número par" : "Número impar");

  return 0;
}