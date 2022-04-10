#include <stdio.h>

int main(void) {
  float ha, ht, inss;
  printf("Valor da hora aula:\n");
  scanf("%f", &ha);
  printf("Horas trabalhadas:\n");
  scanf("%f", &ht);
  printf("Percentual de desconto do INSS:\n");
  scanf("%f", &inss);

  printf("Salario Bruto: R$ %.2f\nSalário liquido: R$ %.2f\n", ha * ht, (ha * ht) - (ha * ht * inss / 100));

  return 0;
}