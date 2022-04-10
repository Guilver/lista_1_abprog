#include <stdio.h>

int main(void) {

  int n, temp, d1, d2, d3;

  printf("Escreva um numero de 3 digitos:\n");
  scanf("%d", &n);

  temp = n / 100;
  d1 = temp;
  temp= ((n) - (d1*100))/10;
  d2=temp;
  d3= n - ((d1*100)+(d2*10));

  printf("%d %d %d", d3, d2, d1);

  return 0;
}