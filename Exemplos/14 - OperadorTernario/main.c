#include <stdio.h>

int main(){
  int valor = 0;
  printf("Digite um número: ");
  scanf("%i", &valor);
  printf("O número digitado é ");

  (valor % 2 == 0) ? printf("PAR") : printf("ÍMPAR"); // Condição ? Se Verdadeiro : Se Falso;

  printf("\n");
  return 0;
}
