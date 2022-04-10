#include <stdio.h>

int main(void) {
  int X;
  printf("Insira o numero:\n");
  scanf("%d", &X);
  printf("Triplo %d\nQuadrado %d\nMeio %d\n",X*3,X*X,X/2);
  
  return 0;
}