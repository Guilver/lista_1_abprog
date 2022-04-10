#include <stdio.h>

int main(void) {
  int x;

  x = 7 + 3 * 6 / 2 - 1;
  printf("A ordem será: multiplicação > divisão > soma > subtração\n R: %d\n",x);

  x = 2 % 2 + 2 * 2 - 2 / 2;
  printf("A ordem será: resto > multiplicação > divisão > soma > subtração\n R: %d\n",x);

  x = (3 * 9 * (3 + (9 * 3 / (3))));
  printf("A ordem será: multiplicação > divisão > soma > multiplicação > multiplicação\n R: %d\n",x);

  return 0;
}