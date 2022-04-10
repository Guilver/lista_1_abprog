#include <stdio.h>

int main(void) {

  int s, h, m;

  printf("Tempo em segundos:\n");
  scanf("%d", &s);

  m = s / 60;
  h = m / 60;
  m = m - h * 60;
  s = s - (h * 60 * 60) - (m * 60);

  printf("Horas: %d\nMinutos: %d\nSegundos: %d\n", h, m, s);

  return 0;
}