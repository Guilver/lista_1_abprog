#include <stdio.h>

int main(void) {
  int h,m,s;
  printf("Insira a quantidade de horas:\n");
  scanf("%d", &h);
  printf("Insira a quantidade de minutos:\n");
  scanf("%d", &m);
  printf("Insira a quantidade de segundos:\n");
  scanf("%d", &s);

  s=s+(h*60*60)+(m*60);
  
  printf("Tempo em segundos: %d",s);
  
  return 0;
}