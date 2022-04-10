#include <math.h>
#include <stdio.h>

int main(void) {

  float n1, n2, n3, arit, geom;

  printf("Numero 1:\n");
  scanf("%f", &n1);
  printf("Numero 2:\n");
  scanf("%f", &n2);
  printf("Numero 3:\n");
  scanf("%f", &n3);

  arit = (n1 + n2 + n3) / 3;

  geom = pow((n1 * n2 * n3), 0.3333);

  printf("Média aritmetica: %.2f\n", arit);
  printf("Media geometrica: %.2f\n", geom);
  return 0;
}