#include <stdio.h>
#include <string.h>

int main(){
  char text[128];
  printf("Digite um texto: ");
  fgets(text, 16, stdin);

  /*
  strcmp compara duas strings, se o resultado da comparação for == 0, então as
  strings são iguais, se for diferente 0 a strings são diferentes, sendo que > 0
  significa que a string 1 é maior que a 2, e se < 0, a string 2 é menor que a
  string 1

  Abaixo o \n no final é porque na função fgets é capturado o \n ao apertar a
  tecla enter.
  */
  if(strcmp(text, "abc\n") == 0){
    printf("Texto armazenado. O texto digitado é abc.\n");
  }
  else{
    printf("Texto armazenado\n");
  }
  printf("Digite outro texto: ");

  fgets(text, 16, stdin);
  /*
  Na instrução abaixo, no lugar de \n, que é capturado fgets, ao apertar enter
  é substituido pelo caractere \0 que indica o final da string, assim podemos
  comparar o conteúdo da string facilmente, sem o caractere \n.
  */
  text[strlen(text) - 1] = '\0';

  if(strcmp(text, "Hello World") == 0){
    printf("Texto armazenado. O texto digitado é Hello World.\n");
  }
  else{
    printf("Texto armazenado\n");
  }


  return 0;
}
