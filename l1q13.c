#include <stdio.h>

int main(void) {
  int A, B, x;
  printf("Variavel A:\n");
  scanf("%d", &A);
  printf("Variavel B:\n");
  scanf("%d", &B);
  x = A;
  A = B;
  B = x;
  printf("A: %d\nB: %d\n", A, B);

  return 0;
}