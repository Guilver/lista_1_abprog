#include <stdio.h>

int main(void) {
  int c,l,a;
  printf("comprimento:\n");
  scanf("%d", &c);
  printf("Largura:\n");
  scanf("%d", &l);
  printf("Altura:\n");
  scanf("%d", &a);
  printf("Volume: %d\n",c*l*a);
  
  return 0;
}