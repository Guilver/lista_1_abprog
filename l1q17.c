#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  printf("Numero:\n");
  scanf("%d", &n);

  printf("Modulo: %d\n", abs(n));

  return 0;
}