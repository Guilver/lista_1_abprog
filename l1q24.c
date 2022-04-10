#include <stdio.h>

int main(void) {

  int x, n, z;

  printf("Primeiro numero:\n");
  scanf("%d", &x);
  printf("Segundo numero:\n");
  scanf("%d", &n);

  x = x << n;
  printf("%d\n", x);

  return 0;
}