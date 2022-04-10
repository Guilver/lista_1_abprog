#include <stdio.h>
#define pi 3.14159 

int main(void) {
  float r;
  printf("Raio do circulo:\n");
  scanf("%f", &r);

  printf("Diametro: %.2f\nCircunferência: %.2f\nÁrea: %.2f\n",r*2,2*pi*r,(pi*r*r));

  return 0;
}