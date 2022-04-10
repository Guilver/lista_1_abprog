#include <stdio.h>

int main(void) {
  float d, p;
  printf("Numero de dias trabalhados:\n");
  scanf("%f", &d);

  if(d<10){ p=50.25*d;}
  else if (10<d&&d<=20) { p=50.25*d; p=p+(p*20/100);}
  else if (20<d) { p=50.25*d; p=p+(p*30/100);}
  
  printf("Pagamento liquido: R$ %.2f\n", p-(p*10/100));

  return 0;
}