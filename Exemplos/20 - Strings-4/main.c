#include <stdio.h>
#include <string.h>

int main(){
  char texto1[64] = "Hello!";
  char texto2[64] = "";

  printf("%s\n", texto1);
  printf("%s\n", texto2);
  printf("---\n");

  strcpy(texto1, "Alô mundo!"); //Atribui a string Alô mundo a variável texto1
  strcpy(texto2, texto1);       //Copia a string da variável texto1 para texto2
  printf("%s\n", texto1);
  printf("%s\n", texto2);
  printf("---\n");

  strcpy(texto2, "Hello World!"); //Atribui a string Hello World a variável texto 1
  strcat(texto2, "\nHello, how are you?"); //Adiciona string ao conteúdo da variável texto2
  strcat(texto2, "\nI'm fine, thanks for asking.");
  printf("%s\n", texto1);
  printf("%s\n", texto2);
  printf("---\n");

  return 0;
}
