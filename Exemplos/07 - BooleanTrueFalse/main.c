#include <stdio.h>

int main(){

  /*
  Na linguagem C não há um tipo específico de variável
  para armazenar valores booleanos, então para teste
  de operações lógicas utiliza-se o tipo int, e quando
  a expressão é verdadeira o resultado é 1, e quando é
  falsa o resultado é 0.
  */
  int a = 50<100;
  int b = 50>100;

  printf("%i | %i\n", a, b);
  return 0;
}
