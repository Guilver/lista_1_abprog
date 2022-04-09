#include <stdio.h>

int main(void) {
  int n;
  printf("Insira o numero:\n");
  scanf("%d", &n);
  printf("Decimal: %d \nHexadecimal: %X \nOctal: %o\n",n,n,n);
  
  return 0;
}