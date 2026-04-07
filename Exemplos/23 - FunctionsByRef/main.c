#include <stdio.h>

/*
Para passar valores por referência, no momento de chamar a função, nos argumentos
é necessário informar o endereço de memória das variáveis, e na declaração dos
argumentos da função, é necessário informar com as variáveis com o simbolo de
asterisco, informando que se trata de um ponteiro.
*/

int trocaValores(int *x, int *y){
  *x = 10;
  *y = 20;

  return 0;
}

int main(){
  int a = 0;
  int b = 0;
  trocaValores(&a, &b);
  printf("a = %i | b = %i\n", a, b);
}
