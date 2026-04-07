#include <stdio.h>
#include <string.h>

int main(){
  char nome[32];
  printf("Digite seu nome completo: ");
  //scanf("%s", nome);              //Lê a string até o primeiro espaço
  fgets(nome, sizeof(nome), stdin); //Lê a string completa, incluindo espaços
  printf("O seu nome completo é %s", nome);
  printf("O seu nome tem %li caracteres\n", strlen(nome) - 1);
  /*
  strlen(string) retorna o número de caracteres, exemplo: Maria tem 5 caracteres
  + o caracter especial \0 que define o fim da string, portanto o resultado de
  strlen(string), nesse exemplo, será 6
  */
  return 0;
}
