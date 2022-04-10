#include <stdio.h>

int main(void) {
  float c;
  printf("Temperatura em Celsius:\n");
  scanf("%f", &c);

  printf("Tempreatura em Fahrenheit: %.2f\n", ((9 * c) + 160) / 5);

  return 0;
}