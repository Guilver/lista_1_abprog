#include <stdio.h>

int main(void) {
  float m;
  char s;
  printf("Insira a altura:\n");
  scanf("%f", &m);
  printf("Insira o sexo (M) Masculino ou (F) Feminino:\n");
  scanf(" %c", &s);
  if (s=='M'||s=='m'){
  printf("Peso= %f\n",72.7*m-58);}

  if (s=='F'||s=='f'){
  printf("Peso= %f\n",62.1*m-44.7);}
  
  return 0;
}