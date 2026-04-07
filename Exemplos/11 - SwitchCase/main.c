#include <stdio.h>
#include <stdlib.h>

int main(){
  char choice;
  system("clear");
  printf("Digite um número de 1 a 5: ");
  scanf("%c", &choice);

  switch(choice){ //verifica a expressão, nesse caso o valor de choice
    case('1'):    // se o valor de choice == '1'...
      printf("Você digitou o número um"); //executa o printf...
      break;      //e sai do bloco, caso não houvesse o break, iria ser executado as instruções do case('2') também
    case('2'):
      printf("Você digitou o número dois");
      break;
    case('3'):
      printf("Você digitou o número três");
      break;
    case('4'):
      printf("Você digitou o número quatro");
      break;
    case('5'):
      printf("Você digitou o número cinco");
      break;
    case('6'): //e o valor de choice == '6' ou '7' ou '8' ou '9'...
    case('7'):
    case('8'):
    case('9'):
      printf("Você digitou um número maior que 5"); //Executa o printf...
      break;      //e sai do bloco
    default:      //Caso nenhuma das expressões anteriores sejam verdadeiras, executa o bloco default
      printf("Caracter inválido.");
  }
  printf("\n");

  return 0;
}
