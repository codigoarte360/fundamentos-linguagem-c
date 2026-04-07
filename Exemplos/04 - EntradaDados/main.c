#include <stdio.h>

int main(){
  int a, b, c = 0;
  printf("\nDigite o primeiro valor e pressione enter, depois e segundo e enter:\n");
  scanf("%i%i", &a, &b); //scanf("%tipoDaVariavel01%tipoDaVariavel02", &variavel01, &variavel02);
  /*
  Opcionalmente poderia ser feito:
  scanf("%i", &a);
  scanf("%i", &b);
  */
  c = a + b;
  printf("A soma de %i + %i é igual a %i\n", a, b, c);
  return 0;
}
