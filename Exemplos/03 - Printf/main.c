#include <stdio.h>

int main(){
  int a = 10;
  double b = 2.4;
  char letra = 'h';

  printf("O número é inteiro é %i\n", a);
  printf("O número é float é %f\n", b); //Usa-se %f para imprimir valores float ou double
  printf("O caractere é %c\n", letra); //Para caracter usa-se %c e para string %s

  //%u imprime módulo do número
  //%p imprime endereço de memória
  //%e ou %E imprime número com notação científica
  //%% imprime um símbolo de %

  return 0;
}
