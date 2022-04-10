#include <math.h>
#include <stdio.h>

int main(void) {

  int x1, x2, y1, y2;

  printf("Coordenada x do primeiro ponto:\n");
  scanf("%d", &x1);
  printf("Coordenada y do primeiro ponto:\n");
  scanf("%d", &y1);

  printf("Coordenada x do segundo ponto:\n");
  scanf("%d", &x2);
  printf("Coordenada y do segundo ponto:\n");
  scanf("%d", &y2);

  printf("Distancia entre os pontos: %.2f\n",
         (float)sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));

  return 0;
}